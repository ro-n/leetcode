// 2020-08-04 21:20:40

function singleNumber(nums: number[]): number {
  let ret = 0;
  for (let i = 0; i < nums.length; i++) {
    ret ^= nums[i];
  }
  return ret;
};
