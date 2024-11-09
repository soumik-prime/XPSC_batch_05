// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.09
// Time:   11:20:09
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

    int n, m;
    cin >> n >> m;
    string str;
    set<int> st;
    vector<char> ch(m);
    cin >> str;
    for(int i = 0; i < m; i++){
        int temp;
        cin >> temp;
        st.insert(temp);
    }
    for(int i = 0; i < m; i++) cin >> ch[i];
    sort(ch.begin(), ch.end());
    int idx = 0;
    for(auto i : st){
        str[i-1] = ch[idx++];
    }
    cout << str << endl;

}