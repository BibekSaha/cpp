function printDiagonals(arr) {
  const row = arr.length, col = arr[0].length;
  for (let i = 0; i < row; i++) {
    for (let j = 0; j < col; j++) {
      if (i === j) console.log(arr[i][j]);
      else if (i + j === row - 1) console.log(arr[i][j]);
    }
  }
}

console.log(printDiagonals([[11, 2, 4,],[4, 5, 6],[10, 8, -12]]));