// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.20
// Time:   18:51:01
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

    int a, b, n, s;
    cin >> a >> b >> n >> s;
    int k = s/n;
    int l;
    if(k < a) l = s-(k*n);
    else l = s-(a*n);
    // cout << l << endl;
    if(l <= b) coutY;
    else coutN;

}