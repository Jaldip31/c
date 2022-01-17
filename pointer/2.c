#include<stdio.h>
int main()
{
    int a[]={54,65,76,85,43},i;
    int *p=a;
    for(i=0;i<5;i++)
    {
        printf("\n a[%d] : %d - %u ",i,*(p+i),p+i);
    }
}