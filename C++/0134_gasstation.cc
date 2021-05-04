/* Tue May  4 14:55:32 2021 */

#include <vector>

using namespace std;

class Solution {
public:
  int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int n = gas.size();
    int diff = 0, total = 0, index = 0;

    for (int i = 0; i < n; i++) {
      diff += (gas[i] - cost[i]);
      total += (gas[i] - cost[i]);

      if (diff < 0) {
        diff = 0;
        index = i + 1;
      }
    }
    return (total >= 0) ? index : -1;
  }
};
