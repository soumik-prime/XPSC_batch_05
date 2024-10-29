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
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int f = -1;
    int b = -1;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += v[i];
        if(v[i]%2 != 0){
            b = i;
            if(f == -1) f = i;
        }
    }
    if(sum%2 == 0){
        cout << n << endl;
        return;
    }
    // cout << f << " " << b << endl;
    if(sum%2 != 0 && n == 1){
        cout << 0 << endl;
        return;
    }
    cout << max({f, b, n-f-1, n-b-1}) << endl;

}