class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;

        int maxLength = 0;
        int currLength = 0;
        st.push(-1);
        int i = 0;
        while(i < s.length()){
            if(s[i] == ')'){
                st.pop();
                if(!st.empty()){
                    currLength = i - st.top();
                    maxLength = max(maxLength, currLength);
                    i++;
                    continue;
                }
            }
            st.push(i);
            i++;
        }
        return maxLength;
    }
};