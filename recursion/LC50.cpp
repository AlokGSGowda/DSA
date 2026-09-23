class Solution {
public:
    double helper(double x, long long n) {
        if (x == 0) {
            return 0;
        }

        if (n == 0) {
            return 1;
        }

        double res = helper(x, n / 2);

        res = res * res;

        if (n % 2) {
            return x * res;
        }
        else {
            return res;
        }
    }
    double myPow(double x, int n) {
        if(n>=0){
            return helper(x, n);
        }
        else{
            return 1/helper(x,n);
        }
        
    }
};