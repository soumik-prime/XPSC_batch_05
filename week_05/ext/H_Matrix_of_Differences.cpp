// Auther: Md. Samiul Islam Soumik
// Date:   2024.12.11
// Time:   22:00:54
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
    int cnt = 1;
    int xcnt = n*n;
    bool flag = true;
    vector<vector<int>> v(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(flag){
                v[i][j] = cnt++;
                flag = false;
            }else{
                v[i][j] = xcnt--;
                flag = true;
            }
        }
        if(i%2 == 0) reverse(v[i].begin(), v[i].end());
    }
    for(int i = 0; i < n; i++){
        for(int j : v[i]) cout << j << " ";
        cout << endl;
    }

}