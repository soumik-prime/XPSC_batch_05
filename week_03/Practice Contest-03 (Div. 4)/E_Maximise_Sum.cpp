// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.11
// Time:   21:10:09
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
    int cnt = 0;
    int mn = INT_MIN;
    int sum = 0;
    bool zero = false;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if(temp < 0){
            cnt++;
            mn = max(mn, temp);
        }
        if(temp == 0) zero = true;
        sum += abs(temp);

    }
    cout << sum << "-> ";
    if(zero || cnt%2 == 0) cout << sum << endl;
    else cout << sum+(mn*2) << endl;

}