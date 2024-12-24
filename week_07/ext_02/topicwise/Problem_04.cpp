// Auther: Md. Samiul Islam Soumik
// Date:   2024.12.24
// Time:   13:24:16
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
    string s, t;
    cin >> s >> t;
    if(s == t){
        coutY;
        return;
    }
    for(int i = 0; i < n; i++){
        if(s[i] == '1' || t[i] == '1'){
            if(s[i] == t[i] || s[i] == '1') coutY;
            else coutN;
            break;
        }
    }

}