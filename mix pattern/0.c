#include<stdio.h>
int main()
{ {   int i,j,sp=4;
    for(i=1;i<=5;i++)
    {
        printf("\n");
        for(j=1;j<=sp;j++)
            printf(" ");
        sp--;

        for(j=1;j<=i;j++)
            printf(" *");
         }}

  /*
     *
    * *
   * * *
  * * * *
 * * * * *
                 */

  {  int i,j,sp=0;
    for(i=1;i<=5;i++)
    {
        printf("\n");
        for(j=1;j<=sp;j++)
        printf(" ");
        sp++;

        for(j=i;j<=5;j++)

        {
            printf(" *");
        }

    }}
/*

 * * * * *
  * * * *
   * * *
    * *
     *
              */





}