// Auther: Md. Samiul Islam Soumik
// Date:   2025.01.06
// Time:   07:56:52
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

    int n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    int temp = (p > q)? p:q;
    int x = n/lcm(a, b);
    // if(a*b > 1e)
    int y = n/a - x;
    int z = n/b - x;
    cout << x*temp+y*p+q*z << endl;

}