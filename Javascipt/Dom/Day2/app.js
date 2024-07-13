const btn = document.querySelector("#a");
const img = document.querySelector("img");

btn.addEventListener("click", () => {
  if (btn.textContent === "ON") {
    img.src = "Img/off.webp";
    btn.innerHTML = "OFF";
    insert()
    
  } else {
    img.src = "Img/on.webp";
    btn.innerHTML = "ON";
    insert2()
  }
});


const insert = ()=>{
  const h1 = document.createElement('h1')
  h1.innerText = 'Hello'

  btn.insertAdjacentElement('beforebegin',h1)
}
const insert2 = ()=>{
  const h1 = document.createElement('h1')
  h1.innerText = 'Hello'

  btn.insertAdjacentElement('afterend',h1) 

}

