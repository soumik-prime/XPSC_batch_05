// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.08
// Time:   08:42:12
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
    char c;
    string str;
    cin >> n >> c >> str;
    vector<int> r, g, y;
    for(int i = 0; i < n; i++){
        if(str[i] == 'r') r.push_back(i);
        else if(str[i] == 'y') y.push_back(i);
        else g.push_back(i);
    }
    int red = 0, yellow = 0;
    for(int i : r){
        auto it = upper_bound(g.begin(), g.end(), i);
        if(it != g.end()){
            red = max(red, *it-i);
        }else{
            int temp = (n-i)+g.front();
            red = max(red, temp);
        }
    }
    for(int i : y){
        auto it = upper_bound(g.begin(), g.end(), i);
        if(it != g.end()){
            yellow = max(yellow, *it-i);
        }else{
            int temp = (n-i)+g.front();
            yellow = max(yellow, temp);
        }
    }

    if(c == 'r') cout << red << endl;
    else if(c == 'y') cout << yellow << endl;
    else cout << 0 << endl;

}