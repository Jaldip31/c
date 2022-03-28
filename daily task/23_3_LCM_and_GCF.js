// Program to find the GCF and LCM of two numbers.

var a=12,b=60
let arr1=[],arr2=[];
for(i=1;i<=a;i++){
    (a%i==0)?arr1.unshift(i):0;
}

for(i=1;i<=b;i++){
    (b%i==0)?arr2.unshift(i):0;
}
console.log(arr1)
console.log(arr2)

let GCF = arr1.find((ele)=>arr2.find(ele2=>ele==ele2))
console.log("GCF : ",GCF);

var LCM = a*b/GCF
console.log("LCM : ",LCM)