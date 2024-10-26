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
    vector<int> v;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a%2 == 0) sum += a;
        else v.push_back(a);
    }
    sort(v.begin(), v.end());
    int odd = 0;
    for(int i : v) odd += i;
    if(odd%2 == 0) sum += odd;
    else sum += (odd - v.front());
    cout << sum << endl;
}