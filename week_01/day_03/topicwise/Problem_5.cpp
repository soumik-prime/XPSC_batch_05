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
    vector<string> fst(n), snd(n), trd(n);
    map<string, int> m;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        fst[i] = str;
        m[str]++;
    }
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        snd[i] = str;
        m[str]++;
    }
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        trd[i] = str;
        m[str]++;
    }
    int fs = 0, sn = 0, tr = 0;
    for(auto str : fst){
        if(m[str] == 1) fs += 3;
        else if(m[str] == 2) fs += 1;
    }
    for(auto str : snd){
        if(m[str] == 1) sn += 3;
        else if(m[str] == 2) sn += 1;
    }
    for(auto str : trd){
        if(m[str] == 1) tr += 3;
        else if(m[str] == 2) tr += 1;
    }
    cout << fs << " " << sn << " " << tr << endl;
}