let num = 153

let result =0;
let temp=num
while (num!=0) {
   let reminder = num%10
   
   result+=reminder*reminder*reminder

   num = Math.floor(num/10)
}

if (temp===result) {
    console.log('Armstrong');
}else{
    console.log('Not');
}