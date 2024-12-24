// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.25
// Time:   22:43:10
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
    sort(v.begin(), v.end());
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += v[i];
        if(sum >= v.back() && i-1 > 0 && i != n-1){
            swap(v[i-1], v.back());
        }
    }
    int temp = v[0];
    int cnt = 0;
    for(int i = 1; i < n; i++){
        if(temp >= v[i]) cnt++;
        temp += v[i];
    }
    cout << cnt << endl;
    for(int i : v) cout << i << " ";
    cout << endl;

}