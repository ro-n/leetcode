// 2020-08-05 15:26:18

function isPalindrome(x: number): boolean {
  if (x < 0) {
    return false;
  }
  let remain = x;
  let sum = 0;
  while (remain != 0) {
    let num = remain % 10;
    sum = sum * 10 + num;
    remain = Math.floor(remain / 10);
  }
  return sum == x;
}
