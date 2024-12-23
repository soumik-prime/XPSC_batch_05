// Auther: Md. Samiul Islam Soumik
// Date:   2024.12.23
// Time:   13:14:20
#include<bits/stdc++.h>
#define int long long
#define float double
#define endl "\n"
#define coutY cout << "YES" << endl
#define couty cout << "Yes" << endl
#define coutN cout << "NO" << endl
#define coutn cout << "No" << endl
using namespace std;
void solve();
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}



void solve(){

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < (1<<n); i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            if((i>>j)&1) sum += v[j];
            else sum -= v[j];
        }
        if(sum == 0 || (sum > 0 && sum%360 == 0)){
            coutY;
            return;
        }
    }
    coutN;

}