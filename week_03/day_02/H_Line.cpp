// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.11
// Time:   10:32:40
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
    string str;
    cin >> str;
    int lf, rt;
    vector<int> v;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(str[i] == 'L') ans += i;
        else ans += (n-i-1);
    }
    v.push_back(ans);
    for(int i = 0; i < n/2; i++){
        lf = i;
        rt = n-1-i;
        if(str[rt] != 'L') v.push_back(v.back()+rt-(n-rt-1));
        if(str[lf] != 'R') v.push_back(v.back()+n-lf-1-lf);
        
    }
    // while(lf < rt){
    //     if(n-lf-1 > rt && str[lf] != 'R'){
    //         v.push_back(v.back()+n-lf-1-lf);
    //         lf++;
    //         continue;
    //     }
    //     if(str[rt] != 'L'){
    //         v.push_back(v.back()+rt-(n-rt-1));
    //         rt--;
    //         continue;
    //     }
    //     if(str[lf] != 'R'){
    //         v.push_back(v.back()+n-lf-1-lf);
    //         lf++;
    //         continue;
    //     }
    //     lf++; rt--;
    // }
    // cout << ans << endl;
    // v.resize(n+1, v.back());
    for(int i = 1; i <= n; i++){
        if(i < v.size()) cout << v[i] << " ";
        else cout << v.back() << " ";
    }
    cout << endl;


}