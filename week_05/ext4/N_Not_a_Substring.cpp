// Auther: Md. Samiul Islam Soumik
// Date:   2024.12.20
// Time:   21:12:19
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
    int n = str.size();
    if(n == 1){
        coutN;
        return;
    }
    if(n == 2 && str[0] == '(' && str[1] == ')'){
        coutN;
        return;
    }
    coutY;
    bool flag = false;
    for(int i = 0; i < n-1; i++){
        if(str[i] == str[i+1]){
            flag = true;
            break;
        }
    }
    if(flag){
        bool temp = true;
        for(int i = 0; i < n*2; i++){
            if(temp){
                cout << "(";
                temp = false;
            }else{
                cout << ")";
                temp = true;
            }
        }
    }else{
        for(int i = 0; i < n; i++) cout << "(";
        for(int i = 0; i < n; i++) cout << ")";
    }
    cout << endl;

}