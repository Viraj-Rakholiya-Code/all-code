const app = (num) => {
  let temp = num;
  let reminder;
  let result = 0;
  while (num != 0) {
    reminder = num % 10;
    result += reminder * reminder * reminder;
    num = Math.floor(num / 10);
  }
  if (result === temp) {
    console.log(true);
  } else {
    console.log(false);
  }
};

app(370);
