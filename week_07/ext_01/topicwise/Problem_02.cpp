// Auther: Md. Samiul Islam Soumik
// Date:   2024.12.23
// Time:   18:16:44
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
    set<int> st;
    st.insert(n);
    for(int i = 0; i <= 64; i++){
        int temp = (n&(~(1LL<<i)));
        if(temp != 0) st.insert(temp);
    }
    cout << st.size() << endl;
    for(auto i : st) cout << i << " ";
    cout << endl;

}