// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.11
// Time:   11:29:21
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
    vector<vector<int>> v(n, vector<int>(n-1));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1; j++){
            cin >> v[i][j];
            if(j == 0) mp[v[i][j]]++;
        }
    }
    int fnt;
    vector<int> ans;
    for(int i = 0; i < n; i++){
        if(mp[v[i][0]] == 1) ans = v[i];
        else fnt = v[i][0];
    }
    cout << fnt << ' ';
    for(auto i : ans) cout << i << " ";
    cout << endl;

}