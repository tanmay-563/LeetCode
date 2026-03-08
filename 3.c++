class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        vector<int> hash(256 , -1);
        int r = 0, l = 0, maxl = 0;
        while(r<n){
            if(hash[s[r]] != -1){
                if(hash[s[r]] >= l){
                    l = hash[s[r]] + 1;
                }
            }
            int len = r - l + 1;
            maxl = max(len, maxl);
            hash[s[r]] = r;
            r++;
        }
        return maxl;
    }
};
