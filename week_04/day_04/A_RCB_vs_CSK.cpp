// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.20
// Time:   18:37:06
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

    int x, y;
    cin >> x >> y;
    if(x-y >= 18) cout << "RCB" << endl;
    else cout << "CSK" << endl;

}