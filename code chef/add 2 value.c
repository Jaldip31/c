#include<stdio.h>
int main()
{
    int i,a,b,n,j;
    printf("enter t :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n");
        scanf("%d%d",&a,&b);

        printf("%d",a+b);
    }
}