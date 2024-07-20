const cartButtons = document.querySelectorAll(".add-to-cart");
const orderList = document.getElementById("order-list");
const totalPriceElement = document.getElementById("total-price");

const checkBox = document.querySelectorAll("#checkbox");
let totalPrice = 0;

// cartButtons.forEach((button) => {
//   button.addEventListener("click", function () {
//     const itemName = this.getAttribute("data-name");
//     const itemPrice = parseFloat(this.getAttribute("data-price"));

//     const itemRow = document.createElement("div");
//     itemRow.classList.add("flex", "text-lg", "justify-between", "mt-5");
//     itemRow.innerHTML = `<p>${itemName}</p><p>$${itemPrice.toFixed(2)}</p>`;
//     orderList.appendChild(itemRow);

//     totalPrice += itemPrice;
//     totalPriceElement.textContent = `$${totalPrice.toFixed(2)}`;
//   });
// });

checkBox.forEach((el)=>{
el.addEventListener("click", (e) => {
    const itemName = e.target.getAttribute("data-name");
    const itemPrice = parseFloat(e.target.getAttribute("data-price"));
  
    const itemRow = document.createElement("div");
    itemRow.classList.add("flex", "text-lg", "justify-between", "mt-5");
    itemRow.innerHTML = `<p>${itemName}</p><p>$${itemPrice.toFixed(2)}</p>`;
  
    const isCheck = e.target.checked;
  
    if (isCheck) {
      orderList.appendChild(itemRow);
      totalPrice += itemPrice;
    } else {
      const itemRows = orderList.querySelectorAll("div");
      itemRows.forEach(row => {
        if (row.firstChild.textContent === itemName) {
          orderList.removeChild(row);
          totalPrice -= itemPrice;
        }
      });
    }
  
    totalPriceElement.textContent = `$${totalPrice.toFixed(2)}`;
  });
  
})

