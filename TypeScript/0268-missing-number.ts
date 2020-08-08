// 2020-08-08 16:11:18

function missingNumber(nums: number[]): number {
  let N = nums.length;
  let ret = N;
  for (let i = 0; i < N; i++) {
    ret = ret ^ i ^ nums[i];
  }
  return ret;
};