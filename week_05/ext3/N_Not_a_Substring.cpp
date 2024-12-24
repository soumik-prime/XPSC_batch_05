// Author: Md. Samiul Islam Soumik
// Date:   2024.12.14
// Time:   12:00:00
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

int32_t main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int tt; 
    cin >> tt;
    for (int i = 1; i <= tt; i++) solve(i);
    return 0;
}

void solve(int tt) {
    string s;
    cin >> s;
    int n = s.size();
    string a, b;

    // Generate patterns as in the first code
    for (int i = 0; i < 2 * n; ++i) {
        a += "()"[i & 1];
        b += ")("[i < n];
    }

    // Check substring containment
    if (a.find(s) == string::npos) {
        cout << "YES\n" << a << endl;
    } else if (b.find(s) == string::npos) {
        cout << "YES\n" << b << endl;
    } else {
        cout << "NO\n";
    }
}
