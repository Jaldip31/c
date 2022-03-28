var i, a = 12, b = 8, p = 2, q = 2;
var ans1 = [], ans2 = [], arr = [];

for (i = 0; i <= a; i++) {
    if (a % p == 0) {
        a = a / p;
        ans1.push(p);
    }
    else {
        p++;
    }
}
console.log(ans1)

for (i = 0; i <= b; i++) {
    if (b % q == 0) {
        b = b / q;
        ans2.push(q);
    }
    else {
        q++;
    }
}
console.log(ans2)

ans1.filter((ele, ind) => {
    if (ele == ans2[ind]) {
        arr.push(ele);
    }
})
console.log(arr);

z = arr.reduce((pv, cv) => pv * cv, 1);

console.log(z)

