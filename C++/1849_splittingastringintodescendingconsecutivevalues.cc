#include <string>

using namespace std;

class Solution {
public:
  bool dfs(string s, long long int root) {
    if (stoull(s) == root)
      return true;
    for (int i = 1; i < s.size(); i++) {
      if (stoull(s.substr(0, i)) != root) continue;
      if (dfs(s.substr(i, s.size() - i), root - 1)) {
        return true;
      }
    }
    return false;
  }

  bool splitString(string s) {
    for (int i = 1; i < s.size(); i++) {
      long long int root = stoull(s.substr(0, i));
      if (dfs(s.substr(i, s.size() - i), root - 1)) {
        return true;
      }
    }
    return false;
  }
};
