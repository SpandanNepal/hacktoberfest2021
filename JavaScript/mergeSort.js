const merge = function(left, right) {
  let sorted = [];

  while (left.length > 0 && right.length > 0) {
    if (left[0] <= right[0]) sorted.push(left.shift());
    else sorted.push(right.shift());
  }

  return [...sorted, ...left, ...right];
}

const mergeSort = function(arr) {
  if (arr.length <= 1) return arr;

  let m = Math.floor(arr.length / 2);

  const left = mergeSort(arr.slice(0, m));
  const right = mergeSort(arr.slice(m));

  return merge(left, right);
}

// Test Cases ( Time complexity O( N * logN ) )
console.log(mergeSort([]));
console.log(mergeSort([1]));
console.log(mergeSort([2, 1]));
console.log(mergeSort([4, 7, 1, 13, 62, 43, 5, 8, 8, 2, 1, 0, 10, 19]));
console.log(mergeSort([1, 2, 3, 4, 5, 6, 7, 8, 9, 10]));
console.log(mergeSort([0, 0, 0, 0, 0, 0, 0, 0]));