// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.24
// Time:   19:17:16
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

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    multiset<int> st;
    int l = 0, r = 0, ans = 0;
        st.insert(v[r]);
    while(r < n){
        int fnt = *st.begin();
        int bak = *(--st.end());
        int diff = bak-fnt;
        if(diff <= k){
            ans += r-l+1;
            r++;
            st.insert(v[r]);
        }else{
            st.erase(st.find(v[l]));
            l++;
        }
    }
    cout << ans << endl;

}