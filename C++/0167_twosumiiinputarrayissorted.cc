// 2020-08-04 01:30:00

#include <vector>

using std::vector;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        if (numbers.size() <= 1)
            return {};
        int i = 0, j = numbers.size() - 1;
        while (i < j)
        {
            if (i < j && target > numbers[i] + numbers[j])
                ++i;
            else if (i < j && target < numbers[i] + numbers[j])
                --j;
            else
                return {i + 1, j + 1};
        }
        return {};
    }
};
