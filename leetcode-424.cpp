/*You are given a string s and an integer k. 
You can choose any character of the string and change it to any other uppercase English character.
You can perform this operation at most k times.
Return the length of the longest substring containing the same letter 
you can get after performing the above operations.*/
#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int longestsubstring(string s, int k){
    int left=0, right=0;
    int freq[26]={0};
    int maxfreq=0;
    int maxLen=0;
    while (right<s.length()){
        char ch=s[right];
        freq[ch-'A']++;
        maxfreq=max(maxfreq,freq[ch-'A']);
        if ((right - left + 1) - maxfreq > k) {
                freq[s[left] - 'A']--;
                left++;
            }
            maxLen = max(maxLen, right - left + 1);
            right++;
        }
        return maxLen;
    }
