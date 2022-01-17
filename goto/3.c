#include<stdio.h>
int main()
{
//1
/*{int i=0,j=0;
    a:
    if(i<5)
    {
        j=0;
        b:
        if(j<=i)
        {
            printf("*");
            j++;
            goto b;
        }
        printf("\n");
        i++;
        goto a;

    }}*/
/*

*/

//2
/*  {int i=5,j=0;
    a:
    if(i>0)
    {
        j=0;
        b:
        if(j<i)
        {
            printf("*");
            j++;
            goto b;
        }
        printf("\n");
        i--;
        goto a;
    }}*/
/*
*****
****
***
**
*
*/

//3
 /* {int i=0,j=0,sp=4;
    a:
    if(i<5)
    {
        j=0;
        c:
        if(j<sp)
        {
            printf("_");
            j++;
            goto c;
        }
        sp--;

        j=0;
        b:
        if(j<=i)
        {
            printf("*");
            j++;
            goto b;
        }
        printf("\n");
        i++;
        goto a;
    }}*/
/*
____*
___**
__***
_****
*****
*/

//4
 /* {int i=5,j=0,sp=0;
    a:
    if(i>0)
    {
        j=0;
        c:
        if(j<=sp)
        {
            printf("_");
            j++;
            goto c;
        }
        sp++;

        j=0;
        b:
        if(j<i)
        {
            printf("*");
            j++;
            goto b;
        }
        printf("\n");
        i--;
        goto a;
    }}*/
/*
_*****
__****
___***
____**
_____*
*/

    {int i=0,j,sp=5;
    a:
    if(i<5)
    {
        j=0;
        c:
        if(i<sp)
        {
            printf("_");
            goto c;
        }
        sp--;

        b:
        j=0;
        if(j<i*2)
        {
            printf("_");
            goto b;
        }
        printf("\n");
        i++;
        goto a;
    }
}