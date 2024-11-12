// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.12
// Time:   13:02:29
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
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    int pre = a.front();
    int l = 0, r = 0;
    int temp = 0;
    while(r < m){
        if(l < n && a[l] < b[r]){
            temp++;
            l++;
        }
        if(l >= n || a[l] >= b[r]){
            cout << temp << ' ';
            r++;
        }
    }
    cout << endl;

}