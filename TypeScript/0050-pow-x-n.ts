// 2020-08-05 16:15:03

function myPow(x: number, n: number): number {
  let N = Math.abs(n);
  let res = 1.0
  while (N != 0) {
    if (N % 2 == 1) {
      res *= x;
    }
    x *= x;
    N >>>= 1;
  }
  return n < 0 ? 1.0 / res : res;
};
