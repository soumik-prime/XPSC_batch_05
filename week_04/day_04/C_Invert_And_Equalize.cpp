// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.20
// Time:   18:43:28
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
    string str;
    cin >> str;
    int cnt = 0;
    for(int i = 0; i < n-1; i++){
        if(str[i] != str[i+1]) cnt++;
    }
    int ans = ceil(1.0*cnt/2);
    cout << ans << endl;

}