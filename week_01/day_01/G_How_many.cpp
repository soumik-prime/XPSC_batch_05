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
void solve();
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}



void solve(){

    int s, t;
    cin >> s >> t;
    int cnt = 0;
    for(int i = 0; i <= 100; i++){
        for(int j = 0; j <= 100; j++){
            for(int k = 0; k <= 100; k++){
                if(i+j+k <= s && i*j*k <= t) cnt++;
            }
        }
    }
    cout << cnt << endl;
}