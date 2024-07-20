const grid = document.querySelector(".grid");
const tiles = Array.from(grid.children);
const resetButton = document.getElementById("reset");

const numbers = [...Array(8).keys()].map((i) => i + 1);
numbers.push("");
shuffle(numbers);

tiles.forEach((tile, index) => {
  tile.textContent = numbers[index];
  tile.addEventListener("click", () => moveTile(index));
});

function moveTile(index) {
  const emptyIndex = numbers.indexOf("");
  const validMoves = [index - 1, index + 1, index - 3, index + 3];
  if (validMoves.includes(emptyIndex)) {
    [numbers[index], numbers[emptyIndex]] = [
      numbers[emptyIndex],
      numbers[index],
    ];
    tiles[index].textContent = numbers[index];
    tiles[emptyIndex].textContent = numbers[emptyIndex];
  }
}

function shuffle(array) {
  for (let i = array.length - 1; i > 0; i--) {
    const j = Math.floor(Math.random() * (i + 1));
    [array[i], array[j]] = [array[j], array[i]];
  }
}

resetButton.addEventListener("click", () => {
  shuffle(numbers);
  tiles.forEach((tile, index) => {
    tile.textContent = numbers[index];
  });
});
