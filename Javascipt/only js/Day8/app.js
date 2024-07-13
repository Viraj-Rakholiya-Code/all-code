const palndrom = (a) => {
  let temp;
  temp = a;
  let reminder;
  let result = 0;
  while (a != 0) {
    reminder = a % 10;
    result = result * 10 + reminder;
    a = Math.floor(a / 10);
  }
  if (temp === result) {
    console.log(true);
  } else {
    console.log(false);
  }
};

palndrom(121);
