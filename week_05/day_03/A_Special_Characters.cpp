// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.25
// Time:   00:20:11
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
    if(n%2 != 0) coutN;
    else{
        bool flag = true;
        coutY;
        for(int i = 0; i < n/2; i++){
            if(flag){
                cout << "AA";
                flag = !flag;
            }else{
                cout << "BB";
                flag = !flag;
            }
        }
        cout << endl;
    }

}