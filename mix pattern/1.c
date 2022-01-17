#include<stdio.h>
int main()
{
/*
    int i,j,sp=0,a;
    for(i=1;i<=5;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
            printf("*");
    }
    for(i=1;i<=5;i++)
    {
        printf("\n");
        for(j=5;j>=i;j--)
            printf("*");
    }

*/
/*

  {  int i,j,a;
    for(i=1;i<=10;i++)
    {
        printf("\n");
        if(i>5)
        {
        for(j=10;j>=i;j--)
        printf(" *");
        }
        else
        {
        for(j=1;j<i;j++)
        printf(" *");
        }

    }}
    */

    int i,j,m,a,sp=4,spp=1;
    for(i=1;i<=10;i++)
    {
        printf("\n");

        if(i>5)
        {for(a=1;a<=sp;a++)
            printf("_");


        for(j=10;j>=i;j--)
            printf(" *");
            sp--;
        }

        else
        {for(a=1;a<=spp;a++)
            printf("_");
            spp++;

        for(m=1;m<i;m++)
            printf(" *");
        }
    }


}