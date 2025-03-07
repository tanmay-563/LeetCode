/*Given a non-negative integer x, return the square root of x rounded down to the nearest integer. 
The returned integer should be non-negative as well.
You must not use any built-in exponent function or operator.
For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
*/

class Solution {
public:
    int mySqrt(int x) {
         return static_cast<int>(sqrt(x)); }
};

//    {SECOND ANSWER}    <<<<<<<<<<<<<<<<<<<<<

class Solution {
public:
    int mySqrt(int x) {
        int left = 0, right = x;
        while (left <= right) {
            long long mid = left + ((right - left) / 2);  // Use long long so that limit does not overflow
            if (mid * mid < x) {
                left = mid + 1;
            } else if (mid * mid > x) {
                right = mid - 1;
            } else {
                return mid;
            }
        }
        return right;
    }
};

