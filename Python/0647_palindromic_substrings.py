# 2020-08-05 14:53:06

class Solution:
    def countSubstrings(self, s: str) -> int:
        count = 0
        if s is None:
            return count
        dp = [[False for _ in range(len(s))] for _ in range(len(s))]
        
        len_ = len(s)
        for i in range(len_ - 1, -1, -1):
            for j in range(i, len_):
                if i == j: dp[i][j] = True
                elif i + 1 == j :dp[i][j] = ( s[i] == s[j] )
                else: dp[i][j] = dp[i][j] = ( dp[i+1][j-1] and s[i] == s[j] )
                if dp[i][j]:
                    count += 1
        return count
