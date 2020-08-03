// 2020-08-04 01:09:02

#include <string>

using std::string;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        if (s.length() <= 1)
            return true;
        int i = 0, j = s.length() - 1;
        while (i < j)
        {
            while (i < j && !isalnum(s[i]))
                i++;
            while (i < j && !isalnum(s[j]))
                j--;
            if (i != j && (s[i] & 223) != (s[j] & 223))
                return false;
            i += 1, j -= 1;
        }
        return true;
    }
};
