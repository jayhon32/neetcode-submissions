class Solution {
public:

    bool isPermutation(string a, string b) {

        if (a.length() != b.length())
            return false;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        return a == b;
    }

    bool checkInclusion(string s1, string s2) {

        int start = 0;
        int end = s1.length() - 1;

        if (s1.length() > s2.length())
            return false;

        while (end < s2.length()) {

            string curr = "";

            for (int i = start; i <= end; i++) {
                curr += s2[i];
            }

            if (isPermutation(curr, s1)) {
                return true;
            }

            start++;
            end++;
        }

        return false;
    }
};