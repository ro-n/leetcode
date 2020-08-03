// 2020-08-04 00:00:59

class Solution {
    public int getSum(int a, int b) {
        int sum = a, carry = b;
        while (carry != 0) {
            sum = a ^ b;
            carry = (a & b) << 1;
            a = sum;
            b = carry;
        }
        return sum;
    }
}