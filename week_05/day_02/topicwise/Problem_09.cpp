// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.24
// Time:   22:08:15
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
    vector<int> v(n), pre(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    pre[0] = v[0];
    for(int i = 1; i < n; i++) pre[i] = pre[i-1]+v[i];
    string str;
    cin >> str;
    int l = 0, r = n-1, ans = 0;
    while(l < n){
        while(l < n && str[l] != 'L'){
            l++;
        }
        while(r >= 0 && str[r] != 'R'){
            r--;
        }
        if(l < r){
            if(l == 0) ans += pre[r];
            else ans += pre[r]-pre[l-1];
            r--;
            l++;
        }else{
            break;
        }
    }
    cout << ans << endl;


}