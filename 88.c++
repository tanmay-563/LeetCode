class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> arr;
        int right =0;
        int left =0;
        while(right < m && left <n){
            if(nums1[right] >= nums2[left]){
                arr.push_back(nums2[left]);
                left++;
            }
            else {
                arr.push_back(nums1[right]);
                right++;
            }
        }

        while(right < m){
            arr.push_back(nums1[right]);
            right++;
        }
        while(left < n){
            arr.push_back(nums2[left]);
            left++;
        }

        for(int i=0; i< n+m; i++){
                nums1[i] = arr[i];
            
        }
    }
};
