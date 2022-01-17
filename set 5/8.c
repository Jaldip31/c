/*
#include<stdio.h>
int main()
{
    int i;
    for(i=65;i<=90;i++)
    {
        if(i%2==1)
        {
        printf("%c",i);
        if(i+=2)
        {
            printf("%c",i+32);
        }
        }


    }
}
*/
#include<stdio.h>
int main()
{
    int i;
    for(i=65;i<=90;i+=4)
    {

    printf("%c\n%c\n",i,i+34);
     }
}