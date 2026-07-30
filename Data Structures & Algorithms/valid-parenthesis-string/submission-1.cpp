class Solution {
public:
    bool checkValidString(string s) {
        stack<int> st;
        stack<int> stars;
        for(int i=0;i<s.length();i++){
            if(s[i] == '(' ){
                st.push(i);
            }else if(s[i] == '*'){
                stars.push(i);
            }else{
                if(!st.empty()) st.pop();
                else if(!stars.empty()) stars.pop();
                else return false;
            }
        }
        while(!st.empty() && !stars.empty()){
            if(st.top() < stars.top()){
                st.pop();
                stars.pop();
            }
            else {
                break;
            }
        }
        return st.empty();
        
    }
};