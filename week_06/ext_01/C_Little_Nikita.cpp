// Auther: Md. Samiul Islam Soumik
// Date:   2024.12.21
// Time:   20:17:20
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

    int n, m;
    cin >> n >> m;
    if(n < m){
        cout << "No" << endl;
        return;
    }
    if(n == m){
        cout << "Yes" << endl;
        return;
    }
    if(abs(n-m)%2 == 0) {
        
        cout << "Yes" << endl;
        return;
    }else{
        cout << "No" << endl;
        return;        
    }

}