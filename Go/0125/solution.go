import "strings"

// 2020-08-04 15:56:29

func isPalindrome(s string) bool {
	for i, j := 0, len(s)-1; i < j; {
		for i < j && !isAlphaNumeric(s[i]) {
			i++
		}
		for i < j && !isAlphaNumeric(s[j]) {
			j--
		}
		if strings.ToLower(string(s[i])) !=
			strings.ToLower(string(s[j])) {
			return false
		}
		i++
		j--
	}
	return true
}

func isAlphaNumeric(c byte) bool {
	return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') ||
		('0' <= c && c <= '9')
}
