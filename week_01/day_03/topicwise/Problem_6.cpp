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
void solve(int tt);
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt;
    for(int i = 1; i <= tt; i++) solve(i);
    return 0;
}



void solve(int tt){

    string str;
    cin >> str;
    map<int, int> m;
    stack<int> cap;
    stack<int32_t> sm;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'b'){
            if(sm.empty()) continue;
            m[sm.top()]++;
            sm.pop();
        }
        else if(str[i] == 'B'){
            if(cap.empty()) continue;
            m[cap.top()]++;
            cap.pop();
        }
        else{
            if(str[i] >= 'A' && str[i] <= 'Z') cap.push(i);
            else if(str[i] >= 'a' && str[i] <= 'z') sm.push(i);
        }
    }
    for(int i = 0; i < str.size(); i++){
        if(m.find(i) == m.end() && str[i] != 'B' && str[i] != 'b') cout << str[i];
    }cout << endl;

}