let a=36,b=72;
// let a=72,b=36;
let arr1=[],arr2=[];

var num=2;
for(i=0;i<7;i++){
    if(a%num==0){
        a=a/num;
        arr1.push(num);
    }
    else{
        num++;
    }
}
console.log(arr1);

var num=2;
for(i=0;i<7;i++){
    if(b%num==0){
        b=b/num;
        arr2.push(num);
    }
    else{
        num++;
    }
}
console.log(arr2);

let ans=[];
arr1.forEach((ele)=>{
    for(var i=0;i<arr2.length;i++){
        if(ele==arr2[i]){
            arr2[i]=0;
            ans.push(ele);
            break;
        }
    }

})
// console.log(arr2)
console.log(ans);
console.log(ans.reduce((pv,cv)=>pv*cv,1))