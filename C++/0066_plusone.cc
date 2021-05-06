#include <vector>

using namespace std;

class Solution {
public:
  vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();

    for (int i = n - 1; i >= 0; i--) {
      if (digits[i] == 9) {
        digits[i] = 0;
      } else {
        digits[i] += 1;
        break;
      }
    }

    if (digits[0]) return digits;
    else {
      digits[0] = 1;
      digits.push_back(0);
    }

    return digits;
  }
};
