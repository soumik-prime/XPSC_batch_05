// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.18
// Time:   09:34:02
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

    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    int l = -1, r = -1;
    for(int i = 0; i < n; i++){
        if(str[i] == 'B'){
            l = i;
            r = i;
            break;
        }
    }
    if(l == -1){
        cout << 0 << endl;
        return;
    }
    int ans = 0;
    bool nw = true;
    while(r < n){
        if(str[r] == 'B') nw = true;
        if(r == n-1 || r-l+1 == k){
            if(nw) ans++;
            r++;
            l = r;
            nw = false;
        }
        else if(nw) r++;
        else{
            l++; r++;
        }
    }
    cout << ans << endl;
}