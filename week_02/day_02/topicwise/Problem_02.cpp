// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.04
// Time:   01:48:40
#include<bits/stdc++.h>
#define int long long
#define float double
#define endl "\n"
#define coutY cout << "YES" << endl
#define couty cout << "Yes" << endl
#define coutN cout << "NO" << endl
#define coutn cout << "No" << endl
using namespace std;
void solve();
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}



void solve(){

    int n;
    cin >> n;
    priority_queue<int> q;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        q.push(temp);
    }
    int ans = 0;
    for(int i = n; i > 0; i--){
        int temp = q.top();
        if(temp >= i){
            ans++;
            q.pop();
        }
    }
    cout << ans << endl;

}