// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.10
// Time:   08:38:32
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

// 1 2 3 4 5

void solve(int tt){

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int ans = min({v[n-1]-v[0], v[n-1]-v[1], v[n-1]-v[2], v[n-2]-v[0], v[n-2]-v[1], v[n-3]-v[0]});
    cout << ans << endl;

}