// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.18
// Time:   09:11:17
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

    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    int l = 0, r = 0;
    int ans = LLONG_MAX;
    int white = 0;
    while(r < n){
        if(str[r] == 'W') white++;
        if(r-l+1 == k){
            ans = min(ans, white);
            if(str[l] == 'W') white--;
            l++;
        }
        r++;
    }
    cout << ans << endl;

}