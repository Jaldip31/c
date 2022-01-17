0#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a[100],b[100],i,d[100],w=0;
    for(i=1;i<4;i++)
    {
        printf("Round[%d] enter score of player 1 and player 2 :",i);
        scanf("%d%d",&a[i],&b[i]);
    }
     printf("Round\tPlayer 1\tPlayer 2\tLead\tLeader");
    for(i=1;i<4;i++)
    {d[i]=(abs(a[i]-b[i]));
       printf("\n%d\t%d\t\t%d\t\t%d",i,a[i],b[i],d[i]);
       (a[i]>b[i])?printf("\tPlayer 1"):printf("\tPlayer 2");
        if(w<d[i])
        {
            w=d[i];
        }
    }
    printf("\n%d",w);

}











/*
if(d[1]>d[2] && d[1]>d[3])
    {
        printf("\n%d",d[1]);
    }
    if(d[2]>d[1] && d[2]>d[3])
    {
        printf("\n%d",d[2]);
    }
    if(d[3]>d[1] && d[3]>d[2])
    {
        printf("%d",d[3]);
    }
    */