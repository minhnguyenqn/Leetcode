/* You are given an integer array nums with n elements and an integer k.
Your task is to find a contiguous subarray whose length is at least k that has the maximum possible average value. 
Return this maximum average value.
In other words, among all subarrays with length greater than or equal to k, you need to find the one with 
the highest average (sum of elements divided by the number of elements) and return that average value.
The answer will be accepted if it has a calculation error less than 10^-5 from the correct answer.
For example, if nums = [1, 12, -5, -6, 50, 3] and k = 4, you need to check all subarrays with length 4, 5, and 6:
Subarrays of length 4: [1, 12, -5, -6] with average 0.5, [12, -5, -6, 50] with average 12.75, [-5, -6, 50, 3] with average 10.5
Subarrays of length 5: [1, 12, -5, -6, 50] with average 10.4, [12, -5, -6, 50, 3] with average 10.8
Subarray of length 6: [1, 12, -5, -6, 50, 3] with average 9.16667
The maximum average among all these subarrays is 12.75.*/

#include <iostream>
#include <vector>
#include <cassert>
using namespace std;
double maxavaveragevalue(const vector <int> nums, int k){
    int max=0;
    double max1=0;
    double max2=0;
    for (int i=k; i<nums.size();i++){
        int sum=0;
        for (int j=0; j<i; j++){
        sum+=nums[j];
        }
        max=sum;
        for (int j=i; j<nums.size();j++){
        sum+=nums[j]-nums[j-i];
        if (max<sum) max=sum;
        }
        max1=double(max)/double(i);
        if (max2<max1) max2=max1;

}
    return max2;
}
int main(){
    cout<<maxavaveragevalue({1, 12, -5, -6, 50, 3},4);
    cout<<"ok";
}