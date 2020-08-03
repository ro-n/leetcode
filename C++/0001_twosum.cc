// 2020-08-04 00:44:13

#include <vector>
#include <unordered_map>

using std::unordered_map;
using std::vector;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];
            if (m.count(diff))
                return {m[diff], i};
            m[nums[i]] = i;
        }
        return {};
    }
};
