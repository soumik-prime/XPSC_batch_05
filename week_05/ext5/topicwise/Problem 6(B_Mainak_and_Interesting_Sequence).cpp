// Auther: Md. Samiul Islam Soumik
// Date:   2024.12.21
// Time:   18:24:44
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
    if(m < n){
        coutn;
        return;
    }
    if(n == m){
        couty;
        for(int i = 0; i < n; i++) cout << 1 << " ";
        cout << endl;
        return;
    }
    int avg = m/n;
    int mod = m%n;
    if(mod%2 != 0){
        if(n%2 != 0){
            couty;
            cout << avg+mod << " ";
            for(int i = 1; i < n; i++) cout << avg << " ";
            cout << endl;
        }else{
            // if(n >=5 && mod > 4){
            //     couty;
            //     cout << avg+(mod-2) << " " << avg+1 << ' ' << avg+1 << " ";
            //     for(int i = 3; i < n; i++) cout << avg << " ";
            //     cout << endl;
            // }else 
            coutn;
        }
    }
    else if(mod == 0){
        couty;
        for(int i = 0; i < n; i++) cout << avg << " ";
        cout << endl;
    }else{
        couty;
        if(n%2 == 0){
            cout << avg+(mod/2) << " " << avg+(mod/2) << " ";
            for(int i = 2; i < n; i++) cout << avg << " ";
            cout << endl;
        }else{
            cout << avg+mod << " ";
            for(int i = 1; i < n; i++) cout << avg << " ";
            cout << endl;
        }
    }

}