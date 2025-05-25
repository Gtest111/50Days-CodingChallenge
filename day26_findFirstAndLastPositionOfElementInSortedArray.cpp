class Solution {

private:
    int firstOccurence(vector<int> &nums, int &target) {
        int s = 0, e = nums.size() - 1;
        while (s <= e) {
            int m = s + (e - s) / 2;
            if (nums[m] == target && (m == 0 || nums[m - 1] != target)) {
                return m;
            } else if (nums[m] >= target) {
                e = m - 1;
            } else {
                s = m + 1;
            }
        }
        return -1;
    }

    int lastOccurence(vector<int> &nums, int& target) {
        int s = 0, e = nums.size() - 1;
        while (s <= e) {
            int m = s + (e - s) / 2;
            if (nums[m] == target && (m == nums.size() - 1 || nums[m + 1] != target)) {
                return m;
            } else if (nums[m] > target) {
                e = m - 1;
            } else {
                s = m + 1;
            }
        }
        return -1;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int first = 0, last = 0;
        if(nums.size() == 0){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        if(nums[0] == target){
            // first = 0;
            ans.push_back(0);
        }
        else{
            // first = firstOccurence(nums,target);
            ans.push_back(firstOccurence(nums,target));
        }
        if(nums[nums.size()-1] == target){
            // last = nums.size() - 1;
            ans.push_back(nums.size() - 1);

        }
        else{
            // last = lastOccurence(nums,target);
            ans.push_back(lastOccurence(nums,target));
        }

        // ans.push_back(first);
        // ans.push_back(last);
        return ans;
    }
};