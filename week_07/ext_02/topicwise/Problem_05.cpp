// Auther: Md. Samiul Islam Soumik
// Date:   2024.12.24
// Time:   14:09:41
#include<bits/stdc++.h>
#define int long long
#define float double
#define endl "\n"
#define coutY cout << "YES" << endl
#define couty cout << "Yes" << endl
#define coutN cout << "NO" << endl
#define coutn cout << "No" << endl
#define MAXVALUE 32767
using namespace std;
void solve(int tt);
bool isPalinderome(int x);
void makePalindrome();
vector<int> palindromeList;
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt;
    makePalindrome();
    for(int i = 1; i <= tt; i++) solve(i);
    return 0;
}

void makePalindrome(){
    for(int i = 0; i <= MAXVALUE; i++){
        if(isPalinderome(i)) palindromeList.push_back(i);
    }
}

bool isPalinderome(int x){
    string str = to_string(x);
    string rev = str;
    reverse(rev.begin(), rev.end());
    return str == rev;
}

void solve(int tt){

    int n;
    cin >> n;
    vector<int> v(n), mp(MAXVALUE+1, 0);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        mp[v[i]]++;
    }
    int ans = n;
    for(int i = 0; i < n; i++){
        for(auto j : palindromeList){
            int temp = v[i]^j;
            ans += mp[temp];
        }
    }
    cout << ans/2 << endl;


}