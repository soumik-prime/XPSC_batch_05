// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.20
// Time:   19:06:21
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

    int a, b, n;
    cin >> a >> b >> n;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        b += min(a-1, temp);
    }
    cout << b << endl;

}