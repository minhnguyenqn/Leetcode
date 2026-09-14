/*Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray 
whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.*/
//Input: target = 7, nums = [2,3,1,2,4,3]
//Output: 2
//Explanation: The subarray [4,3] has the minimal length under the problem constraint.
#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int minlen(const vector<int> nums, int k){
    int left=0, right=0, sum=0;
    int minlen=INT_MAX;
    for (right=0;right<nums.size();right++){
        sum+=nums[right];
        while (sum>=k){
            minlen=min(minlen,right-left+1);
            sum=sum-nums[left];
            left++;
        }
        }
  return minlen==INT_MAX?0:minlen;
}
