class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans(n, 1);
        vector<int> prefix(n, 1);
        vector<int> suffix(n, 1);

        int prefixx = 1;

        for (int i = 0; i < n; i++) {
            prefix[i] = prefixx;
            prefixx *= nums[i];
        }

        int suffixx = 1;

        for (int i = n - 1; i >= 0; i--) {
            suffix[i] = suffixx;
            suffixx *= nums[i];
        }

        for (int i = 0; i < n; i++) {
            ans[i] = prefix[i] * suffix[i];
        }

        return ans;
    }
};