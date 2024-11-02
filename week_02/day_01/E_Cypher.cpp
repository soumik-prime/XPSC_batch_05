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
    vector<int> v(n), ans(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        int cnt = 0;
        for(int j = 0; j < m; j++){
            char c;
            cin >> c;
            if(c == 'D') cnt++;
            else cnt--;
        }
        ans[i] = v[i] + cnt;
    }
    for(int i : ans){
        i %= 10;
        if(i >= 0) cout << i << " ";
        else cout << i+10 << " ";
    }
    cout << endl;

}