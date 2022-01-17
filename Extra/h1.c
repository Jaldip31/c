#include<stdio.h>
int main()
{
    int q,r,t,b;


    printf("(qty) (rate) ");
    scanf("%d%d",&q,&r);
s
    printf("(qty)  (rate)  (total)  (Gst)  (Bill Amount) ");
    t=q*r;
    b=t*1.18;
    printf("\n(%d)     (%d)     (%d)    (18)  (%d)",q,r,t,b);
}

