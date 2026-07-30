class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int start=0;
        int end = n-1;
        while(start<end){
            if(nums[start]+nums[end] == target){
                return {start, end};
            }else if(nums[start]+nums[end] > target){
                end--;
            }else if(nums[start]+nums[end] > target){
                start++;
            }
            
        }
    }
};
