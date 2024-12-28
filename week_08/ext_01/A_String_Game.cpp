// Auther: Md. Samiul Islam Soumik
// Date:   2024.12.24
// Time:   14:39:23
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
    int one = 0, zero = 0;
    for(auto c : str){
        if(c == '1') one++;
        else zero++;
    }
    int mn = min(one, zero);
    if(mn%2 == 0) cout << "Ramos" << endl;
    else cout << "Zlatan" << endl;


}