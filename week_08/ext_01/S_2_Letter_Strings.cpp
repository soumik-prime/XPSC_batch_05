// Auther: Md. Samiul Islam Soumik
// Date:   2024.12.24
// Time:   10:23:53
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
    map<string, int> m;
    int ans = 0;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        for(char c = 'a'; c <= 'k'; c++){
            if(c == str[1]) continue;
            string temp;
            temp += str[0];
            temp += c;
            ans += m[temp];
        }
        for(char c = 'a'; c <= 'k'; c++){
            if(c == str[0]) continue;
            string temp;
            temp += c;
            temp += str[1];
            ans += m[temp];
        }
        m[str]++;
    }
    cout << ans << endl;

}