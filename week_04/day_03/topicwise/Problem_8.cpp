// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.18
// Time:   09:21:21
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

    int n, m;
    cin >> n >> m;
    vector<int> v(n), v1(m);
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < m; i++) cin >> v1[i];
    int l = 0, r = 0;
    while(l < n || r < m){
        if(l >= n){
            cout << v1[r] << " ";
            r++;
        }
        else if(r >= m){
            cout << v[l] << " ";
            l++;
        }
        else if(v[l] < v1[r]){
            cout << v[l] << " ";
            l++;
        }
        else if(v1[r] < v[l]){
            cout << v1[r] << " ";
            r++;
        }
        else{
            cout << v[l] << " " << v1[r] << " ";
            l++;
            r++;
        }
    }
    cout << endl;
}