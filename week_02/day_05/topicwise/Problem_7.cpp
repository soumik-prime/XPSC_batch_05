// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.07
// Time:   21:53:19
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
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    string str;
    cin >> str;
    map<int, int> one, zero;
    for(int i = 0; i < n; i++){
        if(str[i] == '1') one[v[i]] = i+1;
        else zero[v[i]] = i+1;
    }
    map<int, int> ans;
    int cnt = 1;
    for(auto [ x, y ] : zero){
        ans[y] = cnt++;
    }
    for(auto [ x, y ] : one){
        ans[y] = cnt++;
    }
    for(auto [ x, y ] : ans){
        cout << y << " ";
    }cout << endl;
}