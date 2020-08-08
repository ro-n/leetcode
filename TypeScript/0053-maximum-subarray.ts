// 2020-08-08 02:28:20

function maxSubArray(nums: number[]): number {
  let max = - Number.MAX_VALUE;
  let cur = 0;

  for (let i = 0; i < nums.length; i++) {
    if (cur <= 0) {
      cur = nums[i];
    } else {
      cur += nums[i];
    }

    max = Math.max(max, cur);
  }

  return max;
};