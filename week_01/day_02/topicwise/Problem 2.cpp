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

    int n;
    cin >> n;
    string str;
    cin >> str; 
    int fst = -1, lst = -1;
    for(int i = 0; i < n; i++){
        if(fst == -1 && str[i] == 'B') fst = i;
        if(str[i] == 'B') lst = i;
    }
    cout << lst-fst+1 << endl;
}
