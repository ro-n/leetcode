// 2020-08-04 23:44:38

#include <cstdlib>

class Solution
{
public:
    double myPow(double x, int n)
    {
        long N = abs(n);
        double ret = 1;
        while (N != 0)
        {
            if ((N & 1) == 1)
                ret *= x;
            x *= x;
            N >>= 1;
        }
        return n < 0 ? 1 / ret : ret;
    }
};
