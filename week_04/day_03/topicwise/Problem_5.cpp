// https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        // write code here
        int n = arr.size();
        int l = 0, r = 0;
        vector<int> ans;
        queue<int> q;
        while(r < n){
            if(arr[r] < 0) q.push(r);
            if(r-l+1 == k){
                if(!q.empty()){
                    ans.push_back(arr[q.front()]);
                    if(q.front() == l) q.pop();
                }else ans.push_back(0);
                l++;
            }
            r++;
        }
        // for(auto i : ans) cout << i << " ";
        return ans;
    }
};