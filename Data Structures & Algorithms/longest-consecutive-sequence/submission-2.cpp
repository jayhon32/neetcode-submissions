class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0){
            return 0;
        }
        if(n==1){
            return n;
        }
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
