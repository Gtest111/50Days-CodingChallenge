class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int ans = 0;
        int index = s.length();
        bool lastFound = false;
        while(index--){
            if(lastFound && s[index] == ' ') return length;
            if(s[index] != ' '){
                lastFound = true;
            }
            if(lastFound){
                length++;
            }
        }
        return length;
    }
};