// Auther: Md. Samiul Islam Soumik
// Date:   2024.12.20
// Time:   22:42:39
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

    int n, k;
    cin >> n >> k;
    vector<int> v(k);
    for(int i = 0; i < k; i++){
        cin >> v[i];
    }
    int z = ceil((v[0]*1.0)/(n-k+1));
    // if(n == k) z = v[0];
    // cout << z << endl;
    for(int i = 1; i < k; i++){
        if(v[i]-v[i-1] < z){
            coutn;
            return;
        }
        z = v[i]-v[i-1];
    }
    couty;

}