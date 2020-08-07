// 2020-08-05 00:16:15

#include <string>
#include <vector>

using std::string;
using std::vector;

class Solution {
public:
    int countSubstrings(string s) {
        int res = 0;
        if (s.length() == 0) return res;

        int len = s.length();
        vector<vector<bool>> dp(len, vector<bool>(len, false));

        for (int i = len - 1; i >= 0; i--) {
            for (int j = i; j <= len - 1; j++) {
                if (i == j) {
                    dp[i][j] = true;
                } else if (i + 1 == j) {
                    dp[i][j] = (s[i] == s[j]);
                } else {
                    dp[i][j] = (s[i] == s[j] && dp[i+1][j-1]);
                }
                if (dp[i][j]) res += 1;
            }
        }

        return res;
    }
};
