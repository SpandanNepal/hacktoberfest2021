const p1button = document.querySelector("#p1button");
const p2button = document.querySelector("#p2button");
let sum1 = 0;
const p2score = document.querySelector("#p2score");
const p1score = document.querySelector("#p1score");
const reset = document.querySelector("#reset");
const winningTotal = document.getElementById("Final_score");
let winnings;
winningTotal.addEventListener('change', function () {
    winnings = parseInt(this.value);
    sum1 = 0;    //writing this code line{11 to 14} since players will get only one chance to change their scores and play
    sum2 = 0;
    p1score.innerHTML = `${sum1}`;
    p2score.innerHTML = `${sum2}`;
})
p1button.addEventListener("click", function () {
    if (sum1 !== winnings && sum2 !== winnings) {
        sum1++;
        p1score.innerHTML = `${sum1}`;
    }
    if (sum1 === winnings && sum2 !== winnings) {
        p1score.style.color = '#38b000';
        p2score.style.color = '#d90429';
    }
})
let sum2 = 0;
p2button.addEventListener("click", function () {
    if (sum2 !== winnings && sum1 !== winnings) {
        sum2++;
        p2score.innerHTML = `${sum2}`;
    }
    if (sum2 === winnings & sum1 !== winnings) {
        p2score.style.color = '#38b000';
        p1score.style.color = '#d90429';
    }
})

reset.addEventListener("click", function () {
    sum1 = 0;
    sum2 = 0;
    p1score.innerHTML = `${sum1}`;
    p2score.innerHTML = `${sum2}`;
    p1score.style.color = '';
    p2score.style.color = '';
})
