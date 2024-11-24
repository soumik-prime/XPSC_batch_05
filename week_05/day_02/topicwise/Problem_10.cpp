class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // your code here
        int l = 0, r = 0, ans = -1;
        int n = s.size();
        map<char, int> mp;
        mp[s[r]]++;
        while(r < n){
            if(mp.size() == k){
                ans = max(ans, r-l+1);
            }
            if(mp.size() <= k){
                r++;
                mp[s[r]]++;
            }else{
                mp[s[l]]--;
                if(mp[s[l]] == 0) mp.erase(s[l]);
                l++;
            }
        }
        return ans;
    }
};