// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.10
// Time:   08:29:15
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

    int x, y, z;
    cin >> x >> y >> z;
    int more = 4-x-y-z;
    if(x+more > z) couty;
    else coutn;

}