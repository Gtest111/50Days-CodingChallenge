class Solution {
public:
    int reverse(int x) {

        long long int ans = 0;
        while(x != 0){
            ans += x%10;
            ans = ans*10;
            x /= 10;
        }
        ans /= 10;
        if(ans > 2147483648 || ans < -2147483647){
            return 0;
        }
        return ans;
    }
};