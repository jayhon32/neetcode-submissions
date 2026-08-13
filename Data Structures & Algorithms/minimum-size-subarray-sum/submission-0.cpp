class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int minLen = INT_MAX;

        int start = 0;
        int end = 0;

        int currSum = 0;

        while (end < nums.size()) {

            currSum += nums[end];

            while (currSum >= target) {

                int currLen = end - start + 1;

                minLen = min(minLen, currLen);

                currSum -= nums[start];

                start++;
            }

            end++;
        }

        if (minLen == INT_MAX)
            return 0;

        return minLen;
    }
};