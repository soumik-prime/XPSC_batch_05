// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.10
// Time:   10:24:14
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
    map<int, int> mp;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = n-1; i >= 0; i--){
        mp[v[i]]++;
        if(mp[v[i]] > 1){
            cout << i+1 << endl;
            return;
        }
    }
    cout << 0 << endl;

}