// 2020-08-05 15:36:58

function allPermuteFromStart(nums: number[], start: number, ret: number[][]) {
  if (start == nums.length) {
    ret.push([...nums]);
  } else {
    for (let i = start; i < nums.length; i++) {
      [nums[start], nums[i]] = [nums[i], nums[start]];
      allPermuteFromStart(nums, start + 1, ret);
      [nums[start], nums[i]] = [nums[i], nums[start]];
    }
  }
}

function permute(nums: number[]): number[][] {
  const ret: number[][] = []

  if (nums == null) {
    return [];
  }
  allPermuteFromStart(nums, 0, ret);
  return ret;
}
