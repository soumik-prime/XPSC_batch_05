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

    int a, b, c;
    cin >> a >> b >> c;
    bool flag = true;
    for(int i = a; i <=b; i++){
        if(i%c == 0){
            cout << i << endl;
            flag = false;
            break;
        }
    }
    if(flag) cout << -1 << endl;

}