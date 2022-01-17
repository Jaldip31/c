//& address of operator
#include<stdio.h>

int main()
{
    int x=10,*p;
    p=&x;
    printf("\n value x : %d",x);
    printf("\n adress x : %u",&x);
    printf("\n adress of x using p :%u",p);
    printf("\n adress of p : %u",&p);
    printf("\n value of x using p :%d",*p);

}
