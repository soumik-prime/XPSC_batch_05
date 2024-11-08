// Author: Md. Samiul Islam Soumik
// Date:   2024.11.08
// Time:   08:25:20
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
    int tt; cin >> tt;
    for(int i = 0; i < tt; i++) solve();
    return 0;
}
 
 
 
void solve(){
 
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> b(m);
    map<int, int> mp;
    for(int i = 0; i < m; i++) {
        int x;
        cin >> x;
        b[i] = x;
        mp[x]++;
    }
    sort(b.begin(), b.end());
    while (q--)
    {
        int a;
        cin >> a;
        if (mp[a] > 0) cout << 0 << endl;
        else if(a < b[0]) cout << b[0]-1 << endl;
        else if(a > b[m-1]) cout << n - b[m-1] << endl;
        else{
            auto it = upper_bound(b.begin(), b.end(), a);
            int idx = distance(b.begin(), it);
            cout << (b[idx]-b[idx-1])/2 << endl;
        }
    }
    
 
}