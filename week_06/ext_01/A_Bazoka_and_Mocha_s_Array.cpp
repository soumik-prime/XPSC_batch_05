// Auther: Md. Samiul Islam Soumik
// Date:   2024.12.21
// Time:   19:59:28
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
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int ind = -1;
    for(int i = 1; i < n; i++){
        if(v[i-1] > v[i]){
            ind = i;
            break;
        }
        if(i == n-1){
            cout << "Yes" << endl;
            return;
        }
    }
    for(int i = ind; i < n-1; i++){
        if(v[i] > v[i+1]){
            cout << "No" << endl;
            return;
        }       
    }
    if(v.back() <= v.front()){
        cout <<  "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}