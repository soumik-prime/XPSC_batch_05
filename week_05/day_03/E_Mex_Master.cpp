// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.25
// Time:   16:33:25
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
    bool one = true;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if(temp > 1) one = false;
        mp[temp]++;
    }
    int temp = 0;
    for(int i = 0; i < n; i++){
        if(mp[i] == n){
            if(i == 0) cout << 1 << endl;
            else cout << 0 << endl;
            return;
        }
        if(mp[i] <= (n+1)/2){
            if(i == 1 && one) i++;
            cout << i << endl;
            return;
        }
    }

}