// 2020-08-04 21:24:10

function twoSum(numbers: number[], target: number): number[] {
  if (!numbers || numbers.length <= 1) return [0, 0];
  let i = 0;
  let j = numbers.length - 1;
  while (i < j) {
    if (target > numbers[i] + numbers[j]) {
      i += 1;
    } else if (target < numbers[i] + numbers[j]) {
      j -= 1;
    } else {
      return [i + 1, j + 1];
    }
  }
  return [0, 0];
}
