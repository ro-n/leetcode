// 2020-08-04 23:14:52

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int remain = x;
        long sum = 0;
        while (remain != 0) {
            int num = remain % 10;
            sum = sum * 10 + num;
            remain /= 10;
        }
        return sum == x;
    }
};
