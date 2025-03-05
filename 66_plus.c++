/*You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

 */
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 1;
        for(int i=n-1; i>=0; i--){
            int num = digits[i] + carry;
            digits[i] = num%10;
            carry = num/10;
        }
        if (carry>0){
            digits.push_back(0);
            int n = digits.size();
            for(int i=n-1; i>0; i--) {
                digits[i]=digits[i-1];
            }
            digits[0]=carry;}
            return digits;
        }
};
