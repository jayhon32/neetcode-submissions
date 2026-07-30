class Solution {
public:
    bool check(string &s, int start, int end) {
        while(start < end) {
            if(s[start] != s[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int count = 1;
        int start = 0;
        int end = s.length() - 1;

        while(start < end) {
            if(s[start] == s[end]) {
                start++;
                end--;
            }
            else if(count == 1) {
                count--;

                return check(s, start + 1, end) ||
                       check(s, start, end - 1);
            }
            else {
                return false;
            }
        }

        return true;
    }
};