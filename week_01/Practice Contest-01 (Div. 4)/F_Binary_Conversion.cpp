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

    int n, k;
    cin >> n >> k;
    string s, t;
    cin >> s >> t;
    int s1 = 0, s0 = 0, t1 = 0, t0 = 0;
    int x = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '1') s1++;
        else s0++;
        if(t[i] == '1') t1++;
        else t0++;
        if(s[i] != t[i]) x++;
    }
    if(s1 != t1 || s0 != t0){
        coutN;
        return;
    }
    int minsw = x/2;
    if(k < minsw){
        coutN;
        return;
    }
    if(k == minsw){
        coutY;
        return;
    }
    if(s0 > 1 || s1 > 1){
        coutY;
    }else{
        if((k-minsw)%2 == 0) coutY;
        else coutN;
    }

}