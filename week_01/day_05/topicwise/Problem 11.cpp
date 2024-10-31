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
void solve(int tt);
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt;
    for(int i = 1; i <= tt; i++) solve(i);
    return 0;
}



void solve(int tt){

    string str;
    cin >> str;
    bool flag = true;
    int idx = -1;
    for(int i = 0; i < str.size()-1; i++){
        if(str[i] == str[i+1]){
            flag = false;
            idx = i;
            break;
        }
    }
    string temp;
    if(flag){
        if(str.back() == 'z') str += 'a';
        else str += (str.back()+1);
        temp = str;
    }else{
        temp = str.substr(0, idx+1);
        if(str[idx] == 'z') temp += 'a';
        else temp += (str[idx]+1);

        temp += str.substr(idx+1);
    }
    cout << temp << endl;

}