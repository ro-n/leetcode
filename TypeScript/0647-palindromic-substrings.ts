// 2020-08-05 23:41:40

function countSubstrings(s: string): number {
  let count = 0;
  if (s == null || s.length == 0) return count;
  for (let i = 0; i < s.length; i++) {
    count += expand(s, i, i);
    count += expand(s, i, i + 1);
  }
  return count;
}

function expand(s: string, left: number, right: number): number {
  let count = 0;
  while (left >= 0 && right <= s.length - 1 && s[left] == s[right]) {
    count += 1;
    left -= 1;
    right += 1;
  }
  return count;
}
