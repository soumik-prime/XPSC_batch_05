// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.25
// Time:   15:50:22
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
    map<char, int> mp;
    for(char c = 'a'; c <= 'z'; c++){
        mp[c] = 0;
    }
    string str = "";
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        for(char c = 'a'; c <= 'z'; c++){
            if(mp[c] == temp){
                str += c;
                mp[c]++;
                break;
            }
        }
    }
    cout << str << endl;

}