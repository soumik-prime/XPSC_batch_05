// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.08
// Time:   07:27:51
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

//    1 2 3 4 5
//    1 2 3 4 5 6 8

void solve(int tt){

    int n;
    cin >> n;
    cout << 2 << endl;
    cout << n << " " << n-1 << endl;
    int i = n, j = n-2;
    while(j > 0){
        cout << i-- << " " << j-- << endl;
    }

}