// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.10
// Time:   10:31:28
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

    string s1, s2;
    cin >> s1 >> s2;
    if(s1.back() != s2.back()){
        if(s1.back() == 'S') cout << '<' << endl;
        else if(s1.back() == 'L') cout << '>' << endl;
        else if(s2.back() == 'S') cout << '>' << endl;
        else cout << '<' << endl;
    }
    else if(s1.back() == 'S'){
        if(s1.size() == s2.size()) cout << '=' << endl;
        else if(s1.size() > s2.size()) cout << '<' << endl;
        else cout << '>' << endl;
    }else{
        if(s1.size() == s2.size()) cout << '=' << endl;
        else if(s1.size() < s2.size()) cout << '<' << endl;
        else cout << '>' << endl;
    }

}