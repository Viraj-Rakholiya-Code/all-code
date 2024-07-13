const firstName = 'Viraj'
const lastName = 'Rakholiya'
const age = 18


const person = {
    firstName,
    lastName,
    age
}

const todo = {
    id: 1,
    title: 'Take out trash',
    user: {
      name: 'John',
    },
  };

  const {id,title,user:Name} = todo

  const numbers = [23, 67, 33, 49, 52];

  const [First, second, third, ...rest] = numbers;
  
  console.log(First, second,third, rest);
  
  
