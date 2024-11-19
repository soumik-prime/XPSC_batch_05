// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.18
// Time:   17:53:22
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
    cin >>  n;
    vector<int> v(n);
    int sum = 0; 
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += abs(v[i]);
    }
    int l = 0, r = 0;
    int ans = 0;
    while(r < n){
        if(v[l] >= 0){
            l++;
            if(r < l) r = l;
            continue;
        }
        if(v[r] > 0){
            ans++;
            r++;
            l = r;
            continue;
        }
        if(r == n-1 && v[l] < 0) ans++;
        r++;
    }
    cout << sum << " " << ans << endl;
}