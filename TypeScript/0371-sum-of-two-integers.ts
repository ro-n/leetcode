// 2020-08-04 21:34:58

function getSum(a: number, b: number): number {
  return b == 0 ? a : getSum(a ^ b, (a & b) << 1);
};
