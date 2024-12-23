// Auther: Md. Samiul Islam Soumik
// Date:   2024.12.22
// Time:   11:35:52
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
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int cnt = 0;
    int idx = -1;
    for(int i = 0; i < n-1; i++){
        cnt += v[i];
        if(idx == -1 && v[i] != 0) idx = i;
    }
    if(idx == -1){
        cout << 0 << endl;
        return;
    }
    int zero = 0;
    for(int i = idx; i < n-1; i++){
        if(v[i] == 0) zero++;
    }
    cout << cnt+zero << endl;
}