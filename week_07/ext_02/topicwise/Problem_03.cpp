// Auther: Md. Samiul Islam Soumik
// Date:   2024.12.24
// Time:   12:33:16
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
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    vector<int> set(31, 0);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 31; j++){
            if(v[i]&(1LL << j)) set[j]++;
        }
    }
    int ans = 0;
    for(int i = 30; i >= 0; i--){
        int needs = n-set[i];
        if(needs <= k){
            ans += (1LL << i);
            k -= needs;
        }
    }
    cout << ans << endl;

}