let a  = document.querySelector('.child');

let b1 = document.querySelector(".b1")
let b2 = document.querySelector(".b2")



b1.addEventListener('click',()=>{
    a.style.display = 'flex'
})

b2.addEventListener('click',()=>{
    a.style.display = 'none'
})