class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[j] == nums[i] + 1){
                    count++;
                }
            }
        }
        return count-1;
        
    }
};
