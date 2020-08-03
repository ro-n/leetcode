// 2020-08-04 01:27:58

#include <vector>

using std::vector;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ret = 0;
        for (auto num : nums)
        {
            ret ^= num;
        }
        return ret;
    }
};
