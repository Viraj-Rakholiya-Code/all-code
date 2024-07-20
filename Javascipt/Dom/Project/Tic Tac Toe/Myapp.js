const btns = document.querySelectorAll("#btn");

const reset = document.querySelector("#reset");
let player = "O";
let board = ["", "", "", "", "", "", "", "", ""];

const winningCombinations = [
  [0, 1, 2],
  [3, 4, 5],
  [6, 7, 8],
  [0, 3, 6],
  [1, 4, 7],
  [2, 5, 8],
  [0, 4, 8],
  [2, 4, 6],
];

function checkWinner() {
  for (const combo of winningCombinations) {
    const [a, b, c] = combo;

    if (board[a] && board[a] === board[b] && board[a] === board[c]) {
      alert(`Borad Winner ${board[a]}`);
      return ture;
    }
  }

  if (!board.includes("")) {
    alert("Draw");
    return ture;
  }
  return false;
}

btns.forEach((el, index) => {
  el.addEventListener("click", () => {
    if (!el.textContent.trim("")) {
      el.innerHTML = player;
      board[index] = player;
      player = player == "O" ? "X" : "O";
      if (checkWinner()) {
        board = ["", "", "", "", "", "", "", "", ""];

        btns.forEach((el) => {
          el.innerHTML = "";
        });
      }
    } else {
      alert("Choose Another Place");
    }
  });
});

reset.addEventListener("click", () => {
  board = ["", "", "", "", "", "", "", "", ""];
  btns.forEach((el) => {
    el.innerHTML = "";
  });
});
