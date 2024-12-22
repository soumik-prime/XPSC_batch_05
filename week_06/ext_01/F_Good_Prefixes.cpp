// Auther: Md. Samiul Islam Soumik
// Date:   2024.12.21
// Time:   20:20:17
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
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int cnt = 0;
    vector<int> p(n);
    p[0] = v[0];
    for(int i = 1; i < n; i++) p[i] = p[i-1] + v[i];
    int mx = INT_MIN;
    for(int i = 0; i < n; i++){
        mx = max(mx, v[i]);
        if(p[i] - mx == mx) cnt++;
    }
    cout << cnt << endl;

}