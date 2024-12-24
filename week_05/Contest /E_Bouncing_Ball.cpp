// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.25
// Time:   22:32:34
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
    vector<int> v(n), pre(n+1), suff(n+1);
    stack<int> stk;
    int ans = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] == 0) stk.push(i+1);
        pre[i+1] = pre[i]+v[i];
    }
    reverse(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        suff[i+1] = suff[i]+v[i];
    }
    reverse(suff.begin(), suff.end());
    while(!stk.empty()){
        int idx = stk.top();
        stk.pop();
        // cout << idx << "->" << pre[idx] << " " << suff[idx] << endl;
        if(pre[idx] == suff[idx]) ans += 2;
        else if(abs(pre[idx]-suff[idx]) == 1) ans++;
    }
    cout << ans << endl;
}