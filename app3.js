const lodash = require("lodash");
let arr = [3, 1, 4, 5, 6, 7, 8, 15, 43,55];

function sorted(arr) {
  for (i = 0; i < arr.length; i++) {
    if (arr[i] > arr[i + 1]) return false;
  }
  return arr;
}
const start = Date.now();
console.log("Sorting...");
while (!sorted(arr)) {
  arr = lodash.shuffle(arr);
}
const end = Date.now();
const time = (end - start) / 1000;
console.log(arr, "Time ", time);
