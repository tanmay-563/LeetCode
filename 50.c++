class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        double y = 1;
        if( N < 0){
            N =-N;
            x = 1/x;
        }
        while(N>0){
            if(N%2 == 1){
                y = x*y;
            }
            x = x*x;
            N = N/2;
        }
        return y;
    }
};
