// Auther: Md. Samiul Islam Soumik
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
    map<string, string> nm;
    for(int i = 0; i < n; i++){
        string nam, ip;
        cin >> nam >> ip;
        nm[ip] = nam;
    }
    for(int i = 0; i < m; i++){
        string cmd, ip;
        cin >> cmd >> ip;
        ip.pop_back();
        cout << cmd << " " << ip << "; #" << nm[ip] << endl;
    }

}