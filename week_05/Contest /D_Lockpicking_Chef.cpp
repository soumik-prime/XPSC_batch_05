// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.25
// Time:   22:13:07
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

    int n, m;
    cin >> n >> m;
    string s, k;
    cin >> s >> k;
    int ans = INT_MAX;
    for(int i = 0; i <= n-m; i++){
        // cout << i << "->" << endl;
        int sum = 0;
        for(int j = 0; j < m; j++){
            int l = k[j]-'0', f = s[i+j]-'0';
            int temp = min(abs(f-l), 10-abs(f-l));
            // cout << f << " " << l << ' ';
            // cout << temp << endl;
            sum += temp;
        }
        ans = min(sum, ans);
    }
    cout << ans << endl;

}