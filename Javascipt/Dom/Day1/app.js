const a = document.querySelector("#a");
const b = document.querySelector("#b");
const c = document.querySelector("#c");
const d = document.querySelector("#d");

b.addEventListener("click", () => {
  a.innerHTML = "20";
});
c.addEventListener("click", () => {
  a.innerHTML = "30";
});

d.addEventListener("click", () => {
  a.innerHTML = "Click Any Box!";
  console.log("call");
});
