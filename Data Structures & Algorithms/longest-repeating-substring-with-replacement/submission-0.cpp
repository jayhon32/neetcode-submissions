class Solution {
public:
    int characterReplacement(string s, int k) {
        int freq[26] = {0};
        int left=0;
        int maxlen = 0;
        int maxfreq = 0;

        for(int right=0;right<s.length();right++){
            freq[s[left] - 'A']++;
            int curr = 0;
            for(int=0;i<26;i++){
                curr = max(curr,freq[i]);

            }
            maxlen = right-left+1;
            if(maxlen-curr<=k){
                
            }
        }
    }
};
