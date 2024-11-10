// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.10
// Time:   17:48:43
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
    stack<string> st;
    map<string, int> mp;
    for(int i = 0; i < n; i++){
        string temp;
        cin >> temp;
        st.push(temp);
    }
    while(!st.empty()){
        string temp = st.top();
        st.pop();
        if(mp.find(temp) == mp.end()){
            mp[temp]++;
            cout << *(temp.end()-2) << temp.back();
        }
    }
    cout << endl;

}