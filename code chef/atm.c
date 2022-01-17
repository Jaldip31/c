#include<stdio.h>
int main()
{
    int x;
    float y,t;
    printf("Enter bank balance :");
    scanf("%f",&y);
    printf("Enter withdrawal amount :");
    scanf("%d",&x);

    t=y-x-0.5;
    if(x%5==0 && y>x)
    {
        printf("your total bank balance is :%0.2f",t);
    }
    else
    {
        printf("sorry ! %0.2f",y);
    }



}
