// Auther: Md. Samiul Islam Soumik
// Date:   2024.12.23
// Time:   11:47:53
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

bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b){
    return a.first > b.first;
}

void solve(int tt){

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        mp[v[i]]++;
    }
    vector<int> temp;
    vector<pair<int, pair<int, int>>> ans;
    for(auto [ x, y ] : mp){
        if(y >= k){
            if(temp.empty() || temp.back() + 1 == x){
                temp.push_back(x);
            }else{
                ans.push_back({temp.size(), {temp.front(), temp.back()}});
                temp.clear();
                temp.push_back(x);
            }
        }
        else if(!temp.empty()) {
            ans.push_back({temp.size(), {temp.front(), temp.back()}});
            temp.clear();
            // cout << tt << " ";
        }
    }
    if(!temp.empty()) {
            ans.push_back({temp.size(), {temp.front(), temp.back()}});
            temp = {};
        }
    if(ans.empty()){
        cout << -1 << endl;
        return;
    }
    sort(ans.begin(), ans.end(), cmp);
    cout << ans[0].second.first << " " << ans[0].second.second << endl;
    // cout << endl;

}