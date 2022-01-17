//1,1,2,3,5,8.....
#include<stdio.h>
int main()
{
    int i,a=1,b=0,c;
    for(i=0;i<10;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }
}