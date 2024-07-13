const add = (item) => {
  const div = document.createElement("div");
  div.className =
    "w-[100px] h-[50px] bg-green-300 rounded-md flex items-center justify-center";

  const h1 = document.createElement("h1");
  h1.className = "text-2xl";
  h1.appendChild(document.createTextNode(item));

  div.appendChild(h1);
  document.querySelector("#item").appendChild(div);
};

const input = document.querySelector("#input-field");

input.addEventListener("keydown", (ev) => {
  if (ev.key === "Enter") {
    add(input.value);
    input.value = "";
  }
});
