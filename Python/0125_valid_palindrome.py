# 2020-08-04 00:02:55

class Solution:
    def isPalindrome(self, s: str) -> bool:
        if s is None or len(s) <= 1:
            return True
        i = 0; j = len(s) - 1
        while i < j:
            while i < j and not s[i].isalnum():
                i += 1
            while i < j and not s[j].isalnum():
                j -= 1
            if (ord(s[i]) & 0b11011111) != (ord(s[j]) & 0b11011111):
                return False
            i += 1; j -= 1
        return True
