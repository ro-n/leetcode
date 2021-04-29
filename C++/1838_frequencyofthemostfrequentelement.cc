// Thu Apr 29 09:41:07 2021

#include <vector>
using namespace std;

class Solution {
public:
  int maxFrequency(vector<int>& nums, long k) { 
    int i = 0, j;
    long win = 0;
    sort(nums.begin(), nums.end());
    int res = 0;
    for (j = 0; j < nums.size(); j++) {
      win += nums[j];
      while (k + win < (long) nums[j] * (j - i + 1)) {
        win -= nums[i];
        i += 1;
      }
      res = max(res, j - i + 1);
    }
    return res;
  }
};
