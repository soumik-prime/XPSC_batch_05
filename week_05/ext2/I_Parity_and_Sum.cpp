// Auther: Md. Samiul Islam Soumik
// Date:   2024.12.12
// Time:   21:22:43
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
    int m = -1;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if(temp%2 == 0) v.push_back(temp);
        else if(temp > m) m = temp;
    }
    if(v.size() == 0 || m == -1){
        cout << 0 << endl;
        return;
    }
    sort(v.begin(), v.end());
    // cout << m << " ";
    int cnt = v.size();
    for(int i = 0; i < v.size(); i++){
        if(v[i] < m) m += v[i];
        else{
            cnt++;
            break;
        }
    }
    // cout << m << " ";
    cout << cnt << endl;

}