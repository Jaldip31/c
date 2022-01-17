//marksheet in 1d array
#include<stdio.h>
#include<string.h>
int main()
{
    int i,a[10],b[10],c[10],t,x=0,y=0,z=0;

    float p;
    char g,j;
    for(i=1;i<3;i++)
    {
        printf("roll no [%d] enter a,b,c :",i);
        scanf("\n%d%d%d",&a[i],&b[i],&c[i]);
    x+=a[i];
    y+=b[i];
    z+=c[i];}

s    for(i=1;i<3;i++)
    { t=a[i]+b[i]+c[i];
    p=t/3;
    g=(p>80)?'A': (p>70)?'B': (p>60)?'C':'D';
    j=(a[i]>33 && b[i]>33 && c[i]>33 && p>33)?printf("pass"):printf("fail");

        printf("\n[%d]\t[%d]\t[%d]\t[%d]\t[%d]\t[%0.2f]\t[%c]\t[%c]  ",i,a[i],b[i],c[i],t,p,g,j);
    }
    printf("\ntotal\t%d\t%d\t%d\t%d ",x,y,z,t);
}
/*
roll no [1] enter a,b,c :11 22 33
roll no [2] enter a,b,c :99 88 77
 no     a       b       c       total   pr      P/F     grade
[1]     [11]    [22]    [33]    [66]    [22.00] [F]     [D]
[2]     [99]    [88]    [77]    [264]   [88.00] [P]     [A]
total   110     110     110     264
*/

