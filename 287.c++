287. Find the Duplicate Number

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while (slow != fast);

        fast = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};


class solution {
public:
int findDuplicate(vector<int>& nums){
  int n = nums.size();
  int bj ;
  sort(nums.begin(), nums.end());
  for(int i=0; i< n-1; i++){
     if(nums[i] == nums[i+1];
       bj = nums[i];
       }
return bj;
   }
};
