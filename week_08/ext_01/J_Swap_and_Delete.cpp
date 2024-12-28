// Auther: Md. Samiul Islam Soumik
// Date:   2024.12.24
// Time:   10:21:05
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

    string s;
    cin >> s;
    int one = 0, zero = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1') one++;
        else zero++;
    }
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0'){ 
            if(one > 0) one--;
            else break;
        }
        else if(s[i] == '1') {
            if(zero > 0) zero-- ;
            else break;
        }
    }
    cout << zero+one << endl;

}