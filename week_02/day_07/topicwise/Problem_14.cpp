// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.09
// Time:   11:42:05
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
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        mp[temp]++;
    }
    int ans = 0;
    while(!mp.empty()){
        int pre = -1;
        stack<int> st;
        for(auto [ x, y ] : mp){
            if(x == pre+1){
                pre = x;
                mp[x]--;
                if(mp[x] == 0) st.push(x);
            }else{
                ans++;
                pre = x;
                mp[x]--;
                if(mp[x] == 0) st.push(x);
            }
        }

        while(!st.empty()){
            mp.erase(st.top());
            st.pop();
        }
    }
    cout << ans << endl;

}