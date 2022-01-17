#include<stdio.h>
int main()
{
    int i,j,a,sp=20,n=5;
    for(i=1;i<=5;i++)
    {
        printf("\n");

        for(a=1;a<=sp;a++)
            printf("_");
        sp--;
        for(j=1;j<i*2;j++)
            printf("%d",j);
    }

}