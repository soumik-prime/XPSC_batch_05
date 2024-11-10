// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.10
// Time:   19:23:03
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
    vector<int> v;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if(temp != 0) v.push_back(temp);
        mp[temp]++;
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    if(v.size() < 2){
        coutY;
        return;
    }
    for(int i = 1; i < v.size(); i++){
        if(v[i] != v[i-1]){
            coutN;
            return;
        }
    }
    coutY;

}