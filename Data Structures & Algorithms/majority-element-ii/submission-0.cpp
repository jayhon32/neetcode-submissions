class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        unordered_map<int,int> freq;

        for(int x : nums) {
            freq[x]++;
        }

        vector<int> ans;
        int limit = nums.size() / 3;

        for(auto p : freq) {
            if(p.second > limit) {
                ans.push_back(p.first);
            }
        }

        return ans;
    }
};