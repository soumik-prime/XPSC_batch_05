// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.24
// Time:   20:18:17
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

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    map<int, int> mp;
    int l = 0, r = 0, ans = 0;
    mp[v[r]]++;
    while(r < n){
        if(mp.size() <= k) ans += r-l+1;
        if(mp.size() <= k){
            r++;
            mp[v[r]]++;
        }else{
            mp[v[l]]--;
            if(mp[v[l]] == 0) mp.erase(v[l]);
            l++;
        }
    }
    cout << ans << endl;

}