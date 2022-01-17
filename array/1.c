#include<stdio.h>
int main()
{
    int i,a[10];
    for(i=0;i<5;i++)
    {
        printf("enter value for a [%d] :",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\n a[%d] : %d",i,a[i]);
    }

}
/*
enter value for a [0] :1
enter value for a [1] :2
enter value for a [2] :3
enter value for a [3] :4
enter value for a [4] :5

 a[0] : 1
 a[1] : 2
 a[2] : 3
 a[3] : 4
 a[4] : 5
 */