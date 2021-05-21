#include <string>
#include <vector>
using namespace std;
class Solution {
public:
  bool wordBreak(string s, vector<string>& wordDict) {
    vector<bool> dp(s.size() + 1, false);
    dp[s.size()] = true;
    for (int i = s.size() - 1; i > - 1; i--) {
      for (auto word: wordDict) {
        if (i + word.size() <= s.size() && word.compare(s.substr(i, word.size())) == 0) {
          dp[i] = dp[i + word.size()];
        }
        if (dp[i] == true) {
          break;
        }
      }
    }
    return dp[0];
  }
};
