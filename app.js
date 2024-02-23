// let a = process.argv[2];
// let b = process.argv[3];
// let c = process.argv[4];

// let d = Math.sqrt(b * b - 4 * a * c);

// let x1 = ((-b + d) / 2) * a;
// let x2 = ((-b - d) / 2) * a;

// console.log("X1 : " + x1);
// console.log("X2 : " + x2);

process.argv[2].toLowerCase() == process.argv[2].toLowerCase().split('').reverse().join('')
  ? console.log("True")
  : console.log("False");
