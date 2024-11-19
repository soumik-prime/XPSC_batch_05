// https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1?_gl=1*2hl6h9*_ga*MTYxMTcwOTY2OC4xNjYwMzk1MzY0*_ga_DWCCJLKX3X*MTY5Njc3NDQzNi4xLjEuMTY5Njc3NDUwNy4wLjAuMA..

class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int n = txt.size();
	    int k = pat.size();
	    map<char, int> pt;
	    for(auto c : pat) pt[c]++;
	    int l = 0, r = 0;
	    int ans = 0;
	    map<char, int> mp;
	    while(r < n){
	        mp[txt[r]]++;
	        if(r-l+1 == k){
	           bool flag = true;
	           for(auto x : pt){
	               if(mp[x.first] != x.second) flag = false;
	           }
	           if(flag) ans++;
	           mp[txt[l]]--;
	           l++;
	        }
	        r++;
	    }
	    return ans;
	}

};