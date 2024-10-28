// Auther: Md. Samiul Islam Soumik
#include<bits/stdc++.h>
#define int long long
#define float double
#define endl "\n"
#define coutY cout << "YES" << endl
#define couty cout << "Yes" << endl
#define coutN cout << "NO" << endl
#define coutn cout << "No" << endl
using namespace std;
void solve();
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}



void solve(){

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int l = 0, r = n-1;
    int ans[2] = {0, 0};
    int flag = 0;
    while(l <= r){
        int temp = max(v[l], v[r]);
        ans[flag] += temp;
        // flag = !flag;
        if(flag == 0) flag = 1;
        else flag = 0;
        if(temp == v[l]) l++;
        else r--;
    }
    cout << ans[0] << " " << ans[1] << endl;

}