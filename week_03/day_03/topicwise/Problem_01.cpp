// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.12
// Time:   12:07:43
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
    int lf = 0, rt = n-1;
    while(lf <= rt){
        if(str[lf] == str[rt]){
            cout << n-lf*2 << endl;
            return;
        }
        lf++; rt--;
    }
    cout << 0 << endl;

}