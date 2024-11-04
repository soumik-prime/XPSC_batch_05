// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.04
// Time:   01:32:25
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

    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    map<int, int> mp;
    set<int> st;
    for(int i = n-1; i >= 0; i--){
        st.insert(v[i]);
        mp[i] = st.size();
    }
    while(m--){
        int temp;
        cin >> temp;
        temp--;
        cout << mp[temp] << endl;
    }

}