// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.11
// Time:   21:00:49
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

    int x, n, m;
    cin >> x >> n >> m;
    if(n <= x+m) coutY;
    else coutN;

}