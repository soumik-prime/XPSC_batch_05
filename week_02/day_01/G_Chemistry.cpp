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

    int n, k;
    cin >> n >> k;
    map<char, int> m;
    for(int i = 0; i < n; i ++){
        char c;
        cin >> c;
        m[c]++;
    }
    int even = 0, odd = 0;
    for(auto [x, y] : m){
        if(y%2 == 0) even++;
        else odd++;
    }
    if((n-k)% 2 == 0 && k >= odd) coutY;
    else if((n-k)% 2 != 0 && k >= odd-1) coutY;
    else coutN;

}