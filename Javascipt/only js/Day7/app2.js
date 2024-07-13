function Myfuc(name = 'viraj'){
    console.log(name);
}

// Myfuc('jenish')


function fuc2(user)
{
    return  `user id is ${user.id} user name ${user.name}`
}

const obj = {
    id:1,
    name:'viraj rakholiya'
}

const result = fuc2(obj)

console.log(result);