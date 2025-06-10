class Solution {
public:
    string reverseWords(string s) {
    stack<string> st;
    string word;
    istringstream iss(s);

    // Split the string into words and push them onto the stack
    while (iss >> word) {
        st.push(word);
    }

    string result;
    // Pop words from the stack to form the reversed string
    while (!st.empty()) {
        result += st.top();
        st.pop();
        if (!st.empty()) {
            result += " ";  // Add a space between words
        }
    }
    
    return result;
}
};