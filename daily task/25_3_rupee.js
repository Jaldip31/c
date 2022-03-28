//Finding the number of 500,100,50,20,10,5,2,1 rupees in the entered amount.
let rupee = [500, 100, 50, 20, 10, 5, 2, 1];
let arr = ["no.of five hundreds are", "no.of hundreds are", "no.of fifties are", "no.of twenties are", "no.of tens are", "no.of fives are", "no.of twos are", "no.of ones are"];

let amt = 179;

for (let i = 0; i < 8; ++i) {
    let count = 0;
    while (amt >= rupee[i]) {
        amt = amt - rupee[i];
        count++;
    }
    (count > 0) ? console.log(`${arr[i]} : ${count}`) : 0;

}
/*
no.of hundreds are : 1
no.of fifties are : 1
no.of twenties are : 1
no.of fives are : 1
no.of twos are : 2
*/