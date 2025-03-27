/*
202. Happy Number
Solved
Easy
Topics
Companies
Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.
 */
class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        while(n!=1 && seen.find(n) == seen.end()) {
            seen.insert(n);
            int result = 0;
            while (n>0){
                 int digit = n % 10;
                result += digit * digit;
                n /= 10;
            }
            n = result;
        }
        return n == 1;
    }
};
