class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int start = 0;

        for (int end = 0; end < nums.size(); end++) {
            if (nums[end] != val) {
                nums[start] = nums[end];
                start++;
            }
        }

        return start;
    }
};