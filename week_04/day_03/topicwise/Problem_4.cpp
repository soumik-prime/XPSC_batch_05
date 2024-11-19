// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

class Solution {
public:
    long long maximumSumSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        int ans = 0, sum = 0;
        int l = 0, r = 0;
        while(r < n){
            if(r-l+1 < k){
                sum += arr[r];
                r++;
            }
            if(r-l+1 == k){
                sum += arr[r];
                ans = max(ans, sum);
                sum -= arr[l];
                l++;
                r++;
            }
        }
        return ans;
    }
}