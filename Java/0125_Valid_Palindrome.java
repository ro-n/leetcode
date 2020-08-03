// 2020-08-04 00:00:02

class Solution {

    private boolean isAlphanumeric(char c) {
        return (c >= 'a' && c <= 'z') || (c >= 'A' && c <='Z') ||
            (c >= '0' && c <= '9');
    }

    private boolean isEqualIgnoreCase(char a, char b) {
        return (a & 223) == (b & 223);
    }

    public boolean isPalindrome(String s) {
        if (s == null || s.length() == 0) return true;

        int i = 0, j = s.length() - 1;
        for (; i < j; ++i, --j) {
            while (i < j && !isAlphanumeric(s.charAt(i))) ++i;
            while (i < j && !isAlphanumeric(s.charAt(j))) --j;
            if (i < j && !isEqualIgnoreCase(s.charAt(i), s.charAt(j))) return false;
        }
        return true;
    }
}