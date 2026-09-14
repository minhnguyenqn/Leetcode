//Given a string s, find the length of the longest substring without duplicate characters.
//Input: s = "abcabcbb"
//Output: 3 (with the substring "abc")

#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int start=0;
    int maxlen=0;
    unordered_set<char> st;
    for (int end=0; end<s.length();end++){
       while(st.count(s[end])){
        st.erase(s[start]);
        start++;
       }
        st.insert(s[end]);
        maxlen = max(maxlen, end - start + 1);

    }
    return maxlen;
}
int main(){
    return 0;
}
