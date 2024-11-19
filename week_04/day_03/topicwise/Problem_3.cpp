// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.15
// Time:   09:57:04
#include<bits/stdc++.h>
#define int long long
#define float double
#define endl "\n"
#define coutY cout << "YES" << endl
#define couty cout << "Yes" << endl
#define coutN cout << "NO" << endl
#define coutn cout << "No" << endl
using namespace std;
void solve();
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}



void solve(){

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    int fa = 0, fb = 0, ans = 0;
    while(fa < n && fb < m){
        int cntA = 0, cntB = 0;
        int crr = a[fa];
        while(fa < n && a[fa] == crr){
            fa++;
            cntA++;
        }
        while(fb < m && b[fb] < crr){
            fb++;
        }
        while(fb < m && b[fb] == crr){
            fb++;
            cntB++;
        }
        ans += (cntA*cntB);
    }
    cout << ans << endl;

}