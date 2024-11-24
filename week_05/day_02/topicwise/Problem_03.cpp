// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.24
// Time:   11:22:56
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

    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int l = 0, r = 0;
    int ans = 0;
    int sum = v[r];
    while(r < n){
        if(sum <= s){
            ans += r-l+1;
            r++;
            if(r < n) sum += v[r];
            else break;
        }
        if(sum > s){
            sum -= v[l];
            l++;
        }
    }
    cout << ans << endl;
}