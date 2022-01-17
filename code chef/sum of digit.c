#include<stdio.h>
int main()
{
    int i,a,c,num,sum;
    scanf("%d",&c);

    for(i=0;i<c;i++)
    {
        scanf("%d",&num);
        sum=0;
        while(num>=1;num/=10)
        {
            a=num%10;
            sum+=a;
            num=num/10;
        }
        printf("%d\n",sum);
    }
    





}
