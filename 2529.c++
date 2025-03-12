/*Given an array nums sorted in non-decreasing order, 
return the maximum between the number of positive integers and the number of negative integers.
In other words, if the number of positive integers in nums is pos and the number of negative integers is neg, 
then return the maximum of pos and neg.
Note that 0 is neither positive nor negative.*/

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int posc= 0;
        int negc= 0;
        for(int i = 0; i<n; i++){
            if(nums[i]>0){
                posc = posc + 1;
            }
            else if(nums[i]<0){
                negc = negc + 1;
            }
        }
        return max(posc,negc);
    }
};

/*Second Answer                             <<<<<<<<<<<<<<<<-------------
Slightly optimised code for same problem

*/

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int posc= 0;
        int negc= 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]>0){
                posc++;
            }
            else if(nums[i]<0){
                negc++;
            }
        }
        return max(posc,negc);
    }
};
