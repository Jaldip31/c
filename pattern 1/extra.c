#include<stdio.h>
int main()
{
    {
        int i,j,a,sp=5;
        for(i=1;i<=10;i++)
        {
            for(a=1;a<=sp;a++)
                    printf("_");

            if(i<=5){
                for(j=1;j<i;j++)
                    printf("*");
                sp--;
            }
            else{
                for(j=10;j>=i;j--)
                    printf("*");
                sp++;
            }
            printf("\n");
        }
    }
    {
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
{   int i,j,sp=4;
        for(i=1;i<=5;i++)
        {
            printf("\n");
            for(j=1;j<=sp;j++)
                printf(" ");
            sp--;

            for(j=1;j<=i;j++)
                printf(" *");
         }
    }

  /*
     *
    * *
   * * *
  * * * *
 * * * * *
                 */

  {  
      int i,j,sp=0;
        for(i=1;i<=5;i++)
        {
            printf("\n");
            for(j=1;j<=sp;j++)
                printf(" ");
            sp++;

            for(j=i;j<=5;j++)
                printf(" *");
        }
    }

/*

 * * * * *
  * * * *
   * * *
    * *
     *
              */

    printf("\n");
    {
        int i,j,sp=5;
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=sp;j++)
            {
            printf("_");
            }
            for(j=1;j<i*2;j++)
            {
            printf("%d",j);
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
*/
    {
        int i,j,sp=1;
        for(i=5;i>=1;i--)
        {
            for(j=1;j<=sp;j++)
            {
            printf("_");
            }
            for(j=1;j<i*2;j++)
            {
            printf("%d",j);
            }
        sp++;
        printf("\n");
        }
    }


/*
_123456789
__1234567
___12345
____123
_____1
*/
    {
        int i,j,sp=5;
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=sp;j++)
                printf("_");
            for(j=i-1;j>=-(i-1);j--)
                printf("%d",i-abs(j));
        sp--;
        printf("\n");
        }
    }
/*
_____1
____121
___12321
__1234321
_123454321
*/
}
    
    