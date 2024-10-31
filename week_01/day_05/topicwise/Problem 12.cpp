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
    cin >> n;
    map<char, int> m;
    string str;
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;
        str += c;
        m[c]++;
    }
    string ax;
    for(auto [x, y] : m){
        ax += x;
    }
    int temp = ceil((ax.size()*1.0)/2);
    int sz = ax.size();
    map<char, char> code;
    for(int i = 0; i < temp; i++){
        code[ax[i]] = ax[sz-1-i];
        code[ax[sz-1-i]] = ax[i];
    }
    for(char c : str){
        cout << code[c];
    }cout << endl;
}