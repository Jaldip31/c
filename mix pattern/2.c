#include<stdio.h>
int main()
{
    {int i,j,a,sp=5;
    for(i=1;i<=10;i++)
    {
        for(a=1;a<=sp;a++)
                 printf("_");

        if(i<=5)
        {
            for(j=1;j<i;j++)
            printf("*");
        sp--;
        }

        else
        {
        for(j=10;j>=i;j--)
                printf("*");
        sp++;
        }
        printf("\n");
    }}

 int i,j,a,sp=4;
    for(i=1;i<=10;i++)
    {


        if(i<=5)
        {
            for(j=1;j<=i;j++)
            printf("*");

        }

        else
        {
        for(j=10;j>i;j--)
                printf("*");
        }
        printf("\n");
    }

}

/*
_____
____*
___**
__***
_****
*****
_****
__***
___**
____*
*
**
***
****
*****
****
***
**
*

*/