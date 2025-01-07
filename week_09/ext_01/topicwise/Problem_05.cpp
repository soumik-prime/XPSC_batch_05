// Auther: Md. Samiul Islam Soumik
// Date:   2025.01.07
// Time:   01:37:41
#include<bits/stdc++.h>
#define int long long
#define float double
#define endl "\n"
#define coutY cout << "YES" << endl
#define couty cout << "Yes" << endl
#define coutN cout << "NO" << endl
#define coutn cout << "No" << endl
using namespace std;
int mod = 1e9 + 7;
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
    if(n == 0){
        cout << 1 << endl;
        return;
    }
    int ans = 1;
    for(int i = 1; i <= n; i++){
        ans = ((ans % mod) * (i % mod)) % mod;
    }
    cout << ans << endl;


}