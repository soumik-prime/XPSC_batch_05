// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.20
// Time:   21:36:50
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

bool compare(pair<int, int> a, pair<int, int> b){
    return a.first+a.second < b.first+b.second;
}

void solve(int tt){

    int n, c;
    cin >> n >> c;
    vector<pair<int, int>> v(n);
    for(int i = 1; i <= n; i++){
        int temp;
        cin >> temp;
        v[i-1] = {temp, i};
    }
    sort(v.begin(), v.end(), compare);
    int ans = 0;
    int sum = 0;
    for(auto i : v){
        sum += i.first+i.second;
        if(sum <= c) ans++;
        else break;
    }
    cout << ans << endl;

}