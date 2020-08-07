// 2020-08-04 22:46:43

class Solution {

    int expand(String s, int left, int right) {
        int count = 0;
        while (left >= 0 && right <= s.length() - 1 && s.charAt(left) == s.charAt(right)) {
            count += 1;
            left -= 1;
            right += 1;
        }
        return count;
    }

    public int countSubstrings(String s) {
        int count = 0;
        if (s == null || s.length() == 0)
            return count;
        for (int i = 0; i < s.length(); ++i) {
            count += expand(s, i, i);
            count += expand(s, i, i + 1);
        }
        return count;
    }
}
