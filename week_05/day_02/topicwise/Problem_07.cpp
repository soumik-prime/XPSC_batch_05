// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.24
// Time:   21:03:52
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

    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int l = 0, r = 0;
    int ans = 0, sum = v[r];
    while(r < n){
        if(sum == s) ans = max(ans, r-l+1);
        if(sum <= s){
            r++;
            sum += v[r];
        }else{
            sum -= v[l];
            l++;
        }
    }
    if(ans == 0) ans = -1;
    else ans = (n-ans);
    cout << ans << endl;

}