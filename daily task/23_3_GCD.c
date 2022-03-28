// Program to find the GCM of two numbers.
#include<stdio.h>
int main(){

    int a=36,b=72;
    // int a=72,b=36;
    int arr1[10],arr2[10];

    int num=2;
    for(int i=0;i<7;i++){
        if(a%num==0){
            a=a/num;
            arr1[i]=num;
        }
        else{
            num++;
        }
    }
    // printf(arr1);

    // int num2=2;
    // for(int i=0;i<7;i++){
    //     if(b%num==0){
    //         b=b/num2;
    //         arr2[i]=num2;
    //     }
    //     else{
    //         num2++;
    //     }
    // }
    // printf(arr2);
    for(int i=0;i<6;i++){
        printf("\n%d",arr1[i]);
        // printf("\n\t\t%d",arr2[i]);
    }

    // int ans[10];
    // arr1.forEach((ele)=>{
    //     for(int i=0;i<arr2.length;i++){
    //         if(ele==arr2[i]){
    //             arr2[i]=0;
    //             ans.push(ele);
    //             break;
    //         }
    //     }

    // })
    // printf(arr2)
    // printf(ans);
    // printf(ans.reduce((pv,cv)=>pv*cv,1))
}