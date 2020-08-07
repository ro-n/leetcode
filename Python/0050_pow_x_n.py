# 2020-08-05 14:14:54

class Solution:
    def myPow(self, x: float, n: int) -> float:
        N = abs(n)
        res = 1.0
        while N != 0:
            if (N&1) == 1:
                res *= x
            x *= x
            N >>= 1
        return res if n > 0 else 1 / res
