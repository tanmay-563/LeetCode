class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = 0 , maxsum = INT_MIN;
        for (int val : nums){
            curr = curr + val;
            maxsum = max(curr, maxsum);
            if(curr < 0){
                curr = 0;
            }
        }
        return maxsum ;
    }
};
