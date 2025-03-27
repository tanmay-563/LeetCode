/*171. Excel Sheet Column Number
Solved
Easy
Topics
Companies
Given a string columnTitle that represents the column title as appears in an Excel sheet, return its corresponding column number.

For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 */
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for(int i=0 ; i< columnTitle.length(); i++){
            char c = columnTitle[i];
            result = result*26 + (c - 'A' +1);
        }
        return result;
    }
};
