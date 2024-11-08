// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.08
// Time:   09:45:13
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
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int i = 0, j = n-1;
    int mx = n, mn = 1;
    while(i < j){
        int left = v[i], right = v[j];
        if(left != mx && left != mn && right != mx && right != mn){
            cout << i+1 << " " << j+1 << endl;
            return;
        }
        if(left == mn){
            i++;
            mn++;
        }else if(left == mx){
            i++;
            mx--;
        }
        if(right == mn){
            j--;
            mn++;
        }else if(right == mx){
            j--;
            mx--;
        }
        
    }
    cout << -1 << endl;

}