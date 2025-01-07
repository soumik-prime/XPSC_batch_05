// Auther: Md. Samiul Islam Soumik
// Date:   2025.01.07
// Time:   09:28:47
#include<bits/stdc++.h>
#define int long long
#define float double
#define endl "\n"
#define coutY cout << "YES" << endl
#define couty cout << "Yes" << endl
#define coutN cout << "NO" << endl
#define coutn cout << "No" << endl
using namespace std;
const int mod = 1e9 + 7;
void solve(int tt);
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt;
    for(int i = 1; i <= tt; i++) solve(i);
    return 0;
}



void solve(int tt){

    int a, b;
    cin >> a >> b;
    int ans = 1;
    while(b){
        if(b & 1 == 1) ans = (ans*a)%mod;
        a = (a*a)%mod;
        b >>= 1;
    }
    cout << ans << endl;

}