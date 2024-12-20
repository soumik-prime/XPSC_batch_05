// Auther: Md. Samiul Islam Soumik
// Date:   2024.12.20
// Time:   21:41:49
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
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        mp[temp]++;
    }
    int mx = -1;
    for(auto [ x, y ] : mp) mx = max(mx, y);
    if(n == 1 || mx == n){
        cout << 0 << endl;
        return;
    }
    int lft = n-mx;
    int cnt = 0;
    while(mx < n){
        int temp = mx;
        cnt++;
        for(int i = 0; i < temp; i++){
            cnt++;
            lft--;
            mx++;
            if(mx == n) break;
        }
    }
    cout << cnt << endl;

}