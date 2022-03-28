// Program to find the GCF of two numbers.

// //logic-1 ----------------------------------------------------------------------------------------------------------------
// var a=12,b=9
// let arr1=[],arr2=[];
// for(i=1;i<=a;i++){
//     (a%i==0)?arr1.unshift(i):0;
    
// }
// for(i=1;i<=b;i++){
//     (b%i==0)?arr2.unshift(i):0;
// }
// // console.log(arr1)
// // console.log(arr2)

// let GCF = arr1.find((ele)=>arr2.find(ele2=>ele==ele2))      
// console.log(GCF)                                            //3


// //logic-2 ----------------------------------------------------------------------------------------------------------------
// let a=12,b=9;
// let arr1=[],arr2=[];

// var num=2;
// for(i=0;i<7;i++){
//     if(a%num==0){
//         a=a/num;
//         arr1.push(num);
//     }
//     else{
//         num++;
//     }
// }
// // console.log(arr1);

// var num=2;
// for(i=0;i<7;i++){
//     if(b%num==0){
//         b=b/num;
//         arr2.push(num);
//     }
//     else{
//         num++;
//     }
// }
// // console.log(arr2);

// let GCF=[];
// arr1.forEach((ele)=>{
//     for(var i=0;i<arr2.length;i++){
//         if(ele==arr2[i]){
//             arr2[i]=0;
//             GCF.push(ele);
//             break;
//         }
//     }
// })
// // console.log(arr2)
// // console.log(GCF);
// console.log(GCF.reduce((pv,cv)=>pv*cv,1))                // 3