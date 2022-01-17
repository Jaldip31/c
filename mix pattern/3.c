#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int i,j,sp=5;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=sp;j++)
        {
        printf("_");
        }
        for(j=i-1;j>=-(i-1);j--)
        {
        printf("%d",i-(j));
        }
    sp--;
    printf("\n");
    }


}
/*
_____1
____123
___12345
__1234567
_123456789