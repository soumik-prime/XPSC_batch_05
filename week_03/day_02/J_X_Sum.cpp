// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.11
// Time:   12:33:55
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
bool checkValidation(int n, int m, int i, int j);
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt;
    for(int i = 1; i <= tt; i++) solve(i);
    return 0;
}
bool checkValidation(int n, int m, int i, int j){
    if(i < 0 || j < 0 || i >= n || j >= m) return false;
    else return true;
}
void solve(int tt){

    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }
    int sz = max(n, m);
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int temp = v[i][j];
            for(int k = 1; k < sz; k++){
                if(checkValidation(n, m, i+k, j+k)) temp += v[i+k][j+k];
                if(checkValidation(n, m, i-k, j-k)) temp += v[i-k][j-k];
                if(checkValidation(n, m, i+k, j-k)) temp += v[i+k][j-k];
                if(checkValidation(n, m, i-k, j+k)) temp += v[i-k][j+k];
            }
            ans = max(ans, temp);
        }
    }
    cout << ans<< endl;
}