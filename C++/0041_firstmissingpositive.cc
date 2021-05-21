#include <vector>

using namespace std;

class Solution {
public:
  int firstMissingPositive(vector<int>& nums) {
    int ans = 1;
    int k = 0;
    int c = 0;

    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] > 0) c++;
      m[nums[i]] = i;
    }

    while (k < c) {
      if (m.find(ans) == m.end())
        return ans;
      ans += 1;
      k++;
    }
    return ans;
  }
};
