let num = 121;

const temp = num;
let result = 0;

while (num !== 0) {
  const reminder = num % 10;
  result = result * 10 + reminder;
  num = Math.floor(num/10);
}

if (temp === result) {
  console.log("Plandrom");
} else {
  console.log("Not");
}
