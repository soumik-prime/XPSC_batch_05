// Auther: Md. Samiul Islam Soumik
// Date:   2024.12.21
// Time:   21:26:28
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
    int ans = 0;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        ans = gcd(abs(temp-i-1), ans);
    }
    cout << ans << endl;

}