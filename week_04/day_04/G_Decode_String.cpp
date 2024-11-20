// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.20
// Time:   19:28:42
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
    string ans = "";
    for(int i = 0; i < n; i++){
        if(i < n-2 && str[i+2] == '0'){
            if(i < n-3 && str[i+3] == '0'){
                int x = str[i]-'1';
                // ans += ('a'+x);
                char c = 'a'+x;
                cout << c;
                continue;
            }
            int x = str[i]-'1'+1;
            int y = str[i+1]-'1'+1;
            int z = (x*10)+y;
            char c = 'a'+z-1;
            cout << c;
            i += 2;
            // ans += '0';
        }else{
            int x = str[i]-'1';
            // ans += ('a'+x);
            char c = 'a'+x;
            cout << c;
        }
    }
    cout << ans << endl;

}