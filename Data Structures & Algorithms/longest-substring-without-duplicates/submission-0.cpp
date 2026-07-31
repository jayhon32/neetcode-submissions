class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int start = 0;
        int end = 0;
        int freq[128] = {0};
        int windowSize = 0;

        while (end < s.length()) {

            freq[s[end]]++;

            while (freq[s[end]] > 1) {
                freq[s[start]]--;
                start++;
            }

            windowSize = max(windowSize, end - start + 1);

            end++;
        }

        return windowSize;
    }
};