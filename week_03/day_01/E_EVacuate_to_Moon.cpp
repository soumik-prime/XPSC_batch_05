// Author: Md. Samiul Islam Soumik
// Date:   2024.11.10
// Time:   18:59:46
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

    int n, m, h;
    cin >> n >> m >> h;
    priority_queue<int> car, outlets;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        car.push(temp);
    }
    for(int i = 0; i < m; i++){
        int temp;
        cin >> temp;
        outlets.push(temp);
    }
    int ans = 0;
    while(!car.empty() && !outlets.empty()){
        int c = car.top();
        int o = outlets.top();
        car.pop(); outlets.pop();
        int temp = ceil(1.0*c/o);
        if(temp > h){
            ans += o*h;
        }else{
            ans += c;
        }
    }
    cout << ans << endl;

}