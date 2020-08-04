// 2020-08-04 21:04:40

function isPalindrome(s: string): boolean {
  if (!s || s.length <= 1) return true;
  let i = 0,
    j = s.length - 1;
  for (; i < j; i++, j--) {
    while (i < j && !isAlphaNumeric(s[i])) {
      i++;
    }
    while (i < j && !isAlphaNumeric(s[j])) {
      j--;
    }
    if (i < j && s[i].toLowerCase() != s[j].toLowerCase()) return false;
  }
  return true;
}

function isAlphaNumeric(c: string) {
  return c.match(/^[0-9A-Za-z]{1}$/);
}
