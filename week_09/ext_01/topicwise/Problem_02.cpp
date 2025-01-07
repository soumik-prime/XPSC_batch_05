// Auther: Md. Samiul Islam Soumik
// Date:   2025.01.06
// Time:   07:12:33
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
    int a = v[0], b = v[1];
    for(int i = 2; i < n; i++){
        if(i%2 == 0) a = gcd(a, v[i]);
        else b = gcd(b, v[i]);
    }
    bool flag1 = true;
    bool flag2 = true;
    for(int i = 0; i < n; i++){
        if(i%2 == 0 && v[i]%b == 0) flag2 = false;
        if(i%2 != 0 && v[i]%a == 0) flag1 = false;
    }
    // cout << a << " " << b << "-> ";
    if(flag1) cout << a << endl;
    else if(flag2) cout << b << endl;
    else cout << 0 << endl;


}