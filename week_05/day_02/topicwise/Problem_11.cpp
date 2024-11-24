int lenOfLongestSubarr(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        int n = arr. size();
        int ans = 0, sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
            if(sum == k) ans = max(i+1, ans);
            if(mp.find(sum-k) != mp.end()) ans = max(ans, mp[sum-k]);
            else mp[sum] = i;
        }
        return ans;
    }