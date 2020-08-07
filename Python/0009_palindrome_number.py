# 2020-08-05 13:00:36

class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        remain = x
        total = 0
        while remain != 0:
            digit = remain % 10
            total = total * 10 + digit
            remain //= 10
        return total == x
