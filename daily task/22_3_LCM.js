// Program to find the LCM of two numbers.

// // logic - 1 ---------------------------------------------------------------------------------------------------------------
var a=12,b=9
let arr1=[],arr2=[];
for(i=1;i<=a;i++){
    (a%i==0)?arr1.unshift(i):0;
    
}
for(i=1;i<=b;i++){
    (b%i==0)?arr2.unshift(i):0;
}
// console.log(arr1)
// console.log(arr2)

let GCF = arr1.find((ele)=>arr2.find(ele2=>ele==ele2))      //3

let LCM = a*b/GCF
console.log(LCM)                                            //36


// // logic - 2 ---------------------------------------------------------------------------------------------------------------
// var a=12,b=9
// let arr1=[],arr2=[];
// for(j=0;j<1000;j+=10){

//     for(i=1+j;i<=10+j;i++){
//         arr1.push(a*i);
//     }
//     for(i=1+j;i<=10+j;i++){
//             arr2.push(b*i);
//         }
//         var LCM = arr1.find((ele)=> arr2.find(ele2=>ele==ele2))
//         if(LCM!=undefined){break};     
// }
// // console.log(arr1)
// // console.log(arr2)
// console.log(LCM);                                            //36
    

// // logic - 3 ---------------------------------------------------------------------------------------------------------------
// var a = 12,b = 9,p = 2;
// let ans = [];
// var x = 0;
// for (i = 0; i < 10; i++) {
//     if (a % p == 0 && b % p == 0) {
//         a = a / p;
//         b = b / p;
//         ans[x++] = p;
//     }
//     else if (a % p == 0 && b % p == 1) {
//         a = a / p;
//         ans[x++] = p;
//     }
//     else if (a % p == 1 && b % p == 0) {
//         b = b / p;
//         ans[x++] = p;
//     }
//     else {
//         p++;
//     }
// }
// // console.log(ans);

// console.log(ans.reduce((pv, cv) => pv * cv, 1));                        //36
