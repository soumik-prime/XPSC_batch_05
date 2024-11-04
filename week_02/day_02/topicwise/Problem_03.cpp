// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.04
// Time:   10:16:27
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
    cin >>n;
    set<int> st;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        mp[temp]++;
    }
    int mx = 0;
    int key = -1;
    int ex_mx = 0;
    // cout << tt << endl;
    for(auto [ x, y ] : mp){
        // cout << x << "-> " << y << endl;
        mx = max(mx, y);
        if(mx == y) key = x;
    }
    for(auto [ x, y ] : mp){
        if(key != x) ex_mx += y;
    }
    cout << max({0LL, mx-ex_mx, n%2}) << endl;
}