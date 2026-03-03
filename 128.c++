class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        sort(nums.begin() , nums.end());
        int longest = 1, curr = INT_MIN, count = 0;
        for(int i=0; i< n; i++){
            if(nums[i]-1 == curr){
                count = count + 1;
                curr = nums[i];
            }
            else if(nums[i] - 1 == nums[i]){
                continue;
            }
            else(nums[i] != curr){
                count = 1;
            }
            curr = nums[i];
            longest = max(longest , count);
        }
        return longest;
    }
};
