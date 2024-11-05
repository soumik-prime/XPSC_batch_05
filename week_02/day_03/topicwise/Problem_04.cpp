// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.05
// Time:   21:43:28
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
    // cin.ignore();
    int n, k;
    cin >> n >> k;
    map<int, int> mp1, mp2;
    for(int i = 1; i <= n; i++){
        int temp;
        cin >> temp;
        if(mp1[temp] == 0) mp1[temp] = i;
        mp2[temp] = i;
    }
    while(k--){
        int a, b;
        cin >> a >> b;
        if(mp1.find(a) == mp1.end() || mp1.find(b) == mp1.end()) coutN;
        else if(mp1[a] <= mp2[b]) coutY;
        else coutN;
    }

}