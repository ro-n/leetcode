#include <vector>
// Mon May  3 13:22:40 2021
//

using namespace std;

class Solution {
public:
  int majorityElement(vector<int>& nums) {
    int cnt = 0, ret = 0;
    for (auto& num: nums) {
      if (cnt == 0) ret = num;
      if (num != ret) cnt -= 1;
      else cnt += 1;
    }
    return ret;
  }
};
