const inputField = document.querySelector('input[type="text"]');
const buttons = document.querySelectorAll("button");

buttons.forEach((btn) => {
  btn.addEventListener("click", () => {
    let btnValue = btn.getAttribute("value");

    if (btnValue === "=") {
      inputField.value = eval(inputField.value);
    } else if (btnValue === "AC") {
      inputField.value = "";
    } else {
      inputField.value += btnValue;
    }
  });
});
