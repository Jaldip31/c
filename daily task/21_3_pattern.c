#include<stdio.h>
int main(){
    int i,j,sp=5;
    for(i=1;i<=5;i++){
        int a=i;
        for(int s=0;s<sp;++s){
            printf("_");
        }
        sp--;
        for(j=1;j<i*2;j++){
            (i<=j)?printf("%d",a--):printf("%d", a++);
        }
        printf("\n");
    }
}

/*
_____1
____232
___34543
__4567654
_567898765
*/