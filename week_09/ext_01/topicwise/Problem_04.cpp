// Auther: Md. Samiul Islam Soumik
// Date:   2025.01.07
// Time:   01:08:03
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

bool isPrime(int n){
    for(int i = 2; i * i <= n; i++){
        if(n%i == 0) return false;
    }
    return true;
}

void solve(){

    int n;
    cin >> n;
    if(isPrime(n)) cout << 1 << endl;
    else if(n%2 == 0) cout << 2 << endl;
    else{
        if(n > 3 && isPrime(n-2)) cout << 2 << endl;
        else cout << 3 << endl;
    }

}