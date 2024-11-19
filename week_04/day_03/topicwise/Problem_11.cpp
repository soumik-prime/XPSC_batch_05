// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.18
// Time:   19:34:04
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

    int n, k, q;
    cin >> n >> k >> q;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int l = 0, r = 0;
    int ans = 0;
    while(r < n){
        if(v[l] > q){
            l++;
            r = l;

        }
        if(v[r] > q || r == n-1){
            int len;
            if(v[r] <= q && r == n-1) len = r-l+1;
            else len = r - l;
            // cout << l << " " << r << endl;
            // cout << len << endl;
            int temp = len - k + 1;
            if(len >= k){
                ans += (temp*(temp+1))/2;
            }
            r++;
            l = r;
        }else r++;
    }

    cout << ans << endl;

}