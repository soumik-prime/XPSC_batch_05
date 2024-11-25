// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.25
// Time:   17:12:05
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
    if(n == 1){
        cout << 1 << endl;
        cout << 1 << " " << 2 << endl;
        return;
    }
    // string str = "";
    // for(int i = 0; i < n; i++){
    //     str += "BAN";
    // }
    int l = 2, r = 3*n;
    cout << (n+1)/2 << endl;
    for(int i = 0; i < (n+1)/2; i++){
        cout << l << " " << r << endl;
        // swap(str[l], str[r]);
        l += 3;
        r -= 3;
    }
    // cout << str << endl;

}