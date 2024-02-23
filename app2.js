// let arr = [4, 3, 2, 9, 5, 13, 14, -250, 100, -13, 0.1, 0.2];
// let count = 0;
// arr.map((e) => {
//   count += e;
// });
// let avg = count / arr.length;
// let arr2 = [];
// arr.map((e) => {
//   arr2.push(Math.abs(avg - e));
// });

// console.log(arr[arr2.indexOf(Math.min.apply(Math, arr2))]);
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
let arr2 = [3, 1, 4, 5, 6, 7, 8, 15, 43,55]
while (!sorted(arr2)) {
  arr2 = lodash.shuffle(arr);
}
const end = Date.now();
const time = (end - start) / 1000;
console.log(arr2, "Time ", time);
