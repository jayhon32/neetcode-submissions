class Solution {
   public:
    string toLowerCase(string s) {
        for (char& c : s) {
            c = tolower(c);
        }

        return s;
    }

    bool isPalindrome(string s) {
        s = toLowerCase(s);
        int start = 0;
        int end = s.length() - 1;
        while (start < end) {
            
            if (s[start] == ' ' || ispunct(s[start])) {
                start++;
            } else if (s[end] == ' ' || ispunct(s[end])) {
                end--;
            } else if (s[start] == s[end]) {
                start++;
                end--;

            } else {
                return false;
            }
        }
        return true;
    }
};
