// Auther: Md. Samiul Islam Soumik
// Date:   2024.12.13
// Time:   10:03:39
#include<bits/stdc++.h>
#define int long long
#define float double
#define endl "\n"
#define coutY cout << "YES" << endl
#define couty cout << "Yes" << endl
#define coutN cout << "NO" << endl
#define coutn cout << "No" << endl
using namespace std;
void solve(int tt);
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt;
    for(int i = 1; i <= tt; i++) solve(i);
    return 0;
}



void solve(int tt){

    int n;
    cin >> n;
    map<char, int> mp;
    string str;
    set<char> st;
    cin >> str;
    for(char temp : str){
        mp[temp]++;
        st.insert(temp);
    }
    string ans = "";
    while(true){
        if(ans.size() == n) break;
        for(auto c : st){
            if(mp[c] != 0){
                ans += c;
                mp[c]--;
            }
        }
    }
    cout << ans << endl;
}