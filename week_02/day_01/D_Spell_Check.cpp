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

    int n;
    string str;
    cin >> n >> str;
    map<char, int> m;
    for(char c : str) m[c]++;
    if(n == 5 && m['T'] == 1 && m['i'] == 1 && m['m'] == 1 && m['u'] == 1 && m['r'] == 1) coutY;
    else coutN;

}