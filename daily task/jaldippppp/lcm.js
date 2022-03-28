var a = 12,
    b = 8,
    p = 2;
let ans = [];
var x = 0;
for (i = 0; i < 10; i++) {
    if (a % p == 0 && b % p == 0) {
        a = a / p;
        b = b / p;
        ans[x++] = p;
    }
    else if (a % p == 0 && b % p == 1) {
        a = a / p;
        ans[x++] = p;
    }
    else if (a % p == 1 && b % p == 0) {
        b = b / p;
        ans[x++] = p;
    }
    else {
        p++;
    }
}
// console.log(ans);

console.log(ans.reduce((pv, cv) => pv * cv, 1));

