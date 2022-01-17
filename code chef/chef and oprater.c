#include<stdio.h>
int main()
{
    int a[10],b[10],c,i;
    scanf("%d",&c);
    for(i=0;i<c;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<c;i++)
    {
        (a[i]>b[i])?printf("\n>"):(a[i]<b[i])?printf("\n<"):printf("\n=");
    }


}