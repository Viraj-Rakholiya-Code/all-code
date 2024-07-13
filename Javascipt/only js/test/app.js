let x= []

for (let i = 0; i <= 30; i++) {
    x[i] = i    
}

const sum = x.reduce((a,b)=>{
   return a+b
},0)

console.log(sum);