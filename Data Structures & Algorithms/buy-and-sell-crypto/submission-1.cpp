class Solution {
public:
    int maxProfit(vector<int>& prices) {

        stack<int> st;
        int maxProfit = 0;

        for (int price : prices) {

            while (!st.empty() && st.top() > price) {
                st.pop();
            }

            if (st.empty()) {
                st.push(price);
            }

            maxProfit = max(maxProfit, price - st.top());
        }

        return maxProfit;
    }
};