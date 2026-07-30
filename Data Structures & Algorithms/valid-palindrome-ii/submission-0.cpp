class Solution {
public:
    bool validPalindrome(string s) {
        int count  =1;
        int start = 0;
        int end = s.length() - 1;
        while(start<end){
            if(s[start] == s[end]){
                start++;
                end--;
            }
            else if(s[start] == s[--end] && count == 1){
                start++;
                end--;
                count--;
            }
            else if(s[++start] == s[end] && count == 1){
                start++;
                end--;
                count--;
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};