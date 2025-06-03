#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

int findMaxSum(vector<int>& arr, int k){
    sort(arr.begin(), arr.end());
    
    int cnt = 1;
    int size = arr.size()-1;
    int lastElement = arr[size];
    int maxSum = lastElement;
    while(size-- && cnt <= k){
        if(arr[size] != lastElement){
            cnt++;
            if(cnt>k) return maxSum;
            maxSum += arr[size];
            lastElement = arr[size];
        }
        else{
            maxSum += arr[size];
        }
    }
    return maxSum;
}

int main() {
   // Your code here
   vector<int> arr  = {3,-1,2,5};
    int ans = findMaxSum(arr, 1);
    cout<<"The answer is: "<<ans;
   return 0;
}