// Program to find the GCF and LCM of two numbers.

#include<stdio.h>
int main(){

    int a=12,b=9;
    int arr1[100],arr2[100];
    int index1=0;
    for(int i=1;i<=a;++i){
        (a%i==0)?arr1[index1++]=i:0;
    }

    int index2=-1;
    for(int i=1;i<=b;i++){
        (b%i==0)?arr2[++index2]=i:0;
    }

    // for(int i=0;i<index1;i++){
    //     printf("\n\t\t%d",arr1[i]);
    // }
    // for(int i=0;i<index2;i++){
    //     printf("\n%d",arr2[i]);
    // }

    int GCF=0;
    for(int i=0;i<index1;i++){
        for(int j=0;j<index2;++j){
            if(arr1[i]==arr2[j]){
                (arr2[j]>GCF)?GCF=arr2[j]:0;
            }
        }
    }
    printf("\nGCF : %d",GCF);
    int LCM = a*b/GCF;
    printf("\nLCM : %d",LCM);
}