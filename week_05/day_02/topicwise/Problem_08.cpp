// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.24
// Time:   21:19:53
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

    int n, k;
    cin >> n >> k;
    vector<int> a(n), h(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> h[i];
    int l = 0, r = 0, ans = 0, sum = a[r];
    while(r < n){
        if(sum <= k){
            ans = max(ans, r-l+1);
        }
        if(r == n-1) break;
        if(sum <= k){
            if(h[r]%h[r+1] == 0){
                r++;
                sum += a[r];
            }else{
                r++;
                l = r;
                sum = a[r];
            }
        }else{
            sum -= a[l];
            l++;
        }
    }
    cout << ans << endl;
}