class Solution {
public:
    string removeDuplicates(string s) {
        stack<int> st;

        for(char c : s){
            if(!st.empty() && st.top() == c){
                while(!st.empty() && st.top()==c){
                    st.pop();
                }
            }
            else{
                st.push(c);
            }
            
        }
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};