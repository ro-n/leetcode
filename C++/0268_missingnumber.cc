// 2020-08-08 16:24:48

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ret = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            ret = ret ^ nums[i] ^ i;
        }
        return ret;
    }
};