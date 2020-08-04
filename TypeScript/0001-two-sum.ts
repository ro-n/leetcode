// 2020-08-04 17:45:35

function twoSum(nums: number[], target: number): number[] {
  if (nums.length == 0) return [-1, -1];
  const map = new Map();

  for (let i = 0; i < nums.length; i++) {
    let diff = target - nums[i];
    if (map.has(diff)) {
      return [map.get(diff), i];
    } else {
      map.set(nums[i], i);
    }
  }
  return [-1, -1];
}
