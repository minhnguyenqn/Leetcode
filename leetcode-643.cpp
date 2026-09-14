//You are given an integer array nums consisting of n elements, and an integer k.
//Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. 
//Any answer with a calculation error less than 10-5 will be accepted.
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

int maxvalue(const vector<int>& nums, int k) {
    int sum=0; int max=0;
    for (int i=0; i<k; i++){
        sum+=nums[i];
    }
    max=sum;
    for (int j=k; j<nums.size();j++){
        sum+=nums[j]-nums[j-k];
        if (max<sum) max=sum;
    }
    return max;
}
int main(){
    assert(maxvalue({1,9,2,4,3,7},3)==15);
    cout<<"ok";

}