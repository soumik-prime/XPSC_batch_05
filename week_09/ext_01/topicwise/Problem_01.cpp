// Auther: Md. Samiul Islam Soumik
// Date:   2025.01.06
// Time:   06:42:57
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
    set<int> st;
    for(int i = 1; i * i <= n; i++){
        if(n%i == 0){
            st.insert(i);
            st.insert(n/i);
        }
    }
    if(st.size() >= k){
        k--;
        cout << *next(st.begin(), k) << endl;
    }
    else cout << -1 << endl;

}