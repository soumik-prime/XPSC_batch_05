// Auther: Md. Samiul Islam Soumik
// Date:   2024.11.05
// Time:   21:59:02
#include<bits/stdc++.h>
#define int long long
#define float double
#define endl "\n"
#define coutY cout << "YES" << endl
#define couty cout << "Yes" << endl
#define coutN cout << "NO" << endl
#define coutn cout << "No" << endl
using namespace std;
class compare{
public:
    bool operator()(pair<int, int> p1, pair<int, int> p2){
        if(p1.first != p2.first) return p1.first < p2.first;
        else return p1.second > p2.second;
    }
};
void solve();
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}



void solve(){

    int q;
    cin >> q;
    priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq;
    queue<pair<int, int>> qu;
    map<int, int> mp;
    vector<int> ans;
    map<int, int> key;
    int cnt = 1;
    while(q--){
        int a;
        cin >> a;
        if(a == 1){
            int b;
            cin >> b;
            pq.push({b, cnt});
            qu.push({b, cnt++});
            mp[b]++;
        }
        else if(a == 2){
            while(!qu.empty()){
                auto [ x, y ] = qu.front();
                qu.pop();
                if(mp[x] == 0 || key.find(y) != key.end()) continue;
                ans.push_back(y);
                mp[x]--;
                key[y]++;
                break;
            }
        }else if(a == 3){
            while(!pq.empty()){
                auto [ x, y ] = pq.top();
                pq.pop();
                if(mp[x] == 0 || key.find(y) != key.end()) continue;
                ans.push_back(y);
                mp[x]--;
                key[y]++;
                break;
            }
        }
    }
    for(auto i : ans) cout << i << " ";
    cout << endl;

}