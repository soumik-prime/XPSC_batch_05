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

    int n;
    cin >> n;
    map<int, int> m;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        m[temp]++;
        cnt = max(cnt, m[temp]);
    }
    cout << cnt << endl;
}