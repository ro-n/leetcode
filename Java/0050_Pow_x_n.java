// 2020-08-04 22:04:22

class Solution {
    public double myPow(double x, int n) {
        double result = 1;
        long N = Math.abs((long) n);

        while (N != 0) {
            if ((N & 1) == 1)
                result *= x;
            x *= x;
            N >>= 1;
        }

        return n < 0 ? 1 / result : result;
    }
}
