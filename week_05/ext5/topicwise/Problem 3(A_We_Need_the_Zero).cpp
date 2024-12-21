// Auther: Md. Samiul Islam Soumik
// Date:   2024.12.21
// Time:   11:21:39
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
    map<int, int> mp;
    int temp = v.front();
    for(int i = 1; i < n; i++) temp ^= v[i];
    if(temp == 0){
        cout << 0 << endl;
        return;
    }
    for(int i = 0; i < n; i++){
        mp[v[i]]++;
    }
    int od = 0;
    int ans = 0;
    for(auto [ x, y ] : mp){
        if(y%2 != 0){
            od++;
            ans ^= x;
        }
    }
    if(n%2 != 0)  cout << ans << endl;
    else cout << -1 << endl;

}