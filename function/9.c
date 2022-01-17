#include<stdio.h>
int main()
{
    int i,j;
    printf("       *\n");
    int pattern();
    pattern(3);
    pattern(4);
    pattern(5);
    for(i=0;i<3;i++)
    {
        for(j=0;j<1;j++)
        {
            printf("      * *");
        }printf("\n");
    }
}
int pattern(int n)
{
    int i,j,sp=5;
    for(i=1;i<n;i++)
    {
        for(j=0;j<sp;j++)
            printf(" ");
        sp--;
        for(j=0;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
/*
       *
      * *
     * * *
      * *
     * * *
    * * * *
      * *
     * * *
    * * * *
   * * * * *
      * *
      * *
      * *
*/