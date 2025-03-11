/*1358. Number of Substrings Containing All Three Characters
Given a string s consisting only of characters a, b and c.
Return the number of substrings containing at least one occurrence of all these characters a, b and c.
Example 1:
Input: s = "abcabc"
Output: 10
Explanation: The substrings containing at least one occurrence of the characters a, b and c are "abc", "abca", "abcab", "abcabc", "bca", "bcab", "bcabc", "cab", "cabc" and "abc" (again). */


class Solution {
public:
    int numberOfSubstrings(string s) {
        int a =-1; int b = -1; int c =-1;
        int count = 0;
        for (int i=0; i<s.length(); i++){
            if(s[i]=='a'){
            a=i;}
            if(s[i]=='b'){
            b=i;}
            if(s[i]=='c'){
            c=i;}
            count += min({a,b,c}) +1;
        }
        return count;
    }
};
