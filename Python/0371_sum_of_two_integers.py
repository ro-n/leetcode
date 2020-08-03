# 2020-08-04 00:38:23

class Solution:
    def getSum(self, a: int, b: int) -> int:
        return (a if a < 0x7ffffff else a - 0x100000000) \
            if b == 0 \
            else self.getSum((a ^ b) & 0xffffffff,
                             ((a & b) << 1) & 0xffffffff)
