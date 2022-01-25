//array revrese
#include<stdio.h>
int main()
{
    int i,a[10],b,n,temp=0;
    scanf("%d",&n);
    b=n;
    for(i=0;i<=n;i++)
    {
        printf(" a[%d]",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
            temp=a[i];
            a[i]=a[n];
            a[n]=temp;
            n--;
    }
    for(i=0;i<=b;i++)
    {
       printf("\na[%d] %d",i,a[i]);
    }
}
/*
3
 a[0]1
 a[1]2
 a[2]3
 a[3]5

a[0] 5
a[1] 3
a[2] 2
a[3] 1
*/