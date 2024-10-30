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
    map<string, int> m;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        if(m[str] == 0) cout << "OK" << endl;
        else{
            string temp = to_string(m[str]);
            cout << str << temp << endl;
        }
        m[str]++;
    }

}