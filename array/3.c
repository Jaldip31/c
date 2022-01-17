//logic 1 propar
#include<stdio.h>
int main()
{
    int i,a[5],b[5],c[5];
    for(i=0;i<5;i++)
    {
    printf("a[%d] b[%d],c[%d]",i,i,i);
    scanf("%d%d%d",&a[i],&b[i],&c[i]);
    }
    printf("         a    b    c      total ");
    for(i=0;i<5;i++)
    {
        printf("\n [%d] : [%d] [%d] [%d]   [%d] ",i,a[i],b[i],c[i],a[i]+b[i]+c[i]);
    }
}

/*
[0] : [11] [22] [33]   [66]
 [1] : [10] [20] [30]   [60]
 [2] : [11] [22] [33]   [66]
 [3] : [10] [20] [30]   [60]
 [4] : [11] [22] [33]   [66]
*/

//logic 2 patiyu
/*
#include<stdio.h>
int main()
{
    int i,a[5],b[5],c[5],x,y,z;
    for(i=0;i<5;i++)
    {
    printf("a[%d] b[%d],c[%d]",i,i,i);
    scanf("%d%d%d",&a[i],&b[i],&c[i]);
    }
    printf("  no    a    b    c   total ");
    for(i=0;i<5;i++)
    {
        printf("\n [%d] : [%d] [%d] [%d]   [%d] ",i,a[i],b[i],c[i],a[i]+b[i]+c[i]);
    }
     x=a[0]+a[1]+a[2]+a[3]+a[4];
     y=b[0]+b[1]+b[2]+b[3]+b[4];
     z=c[0]+c[1]+c[2]+c[3]+c[4];

    printf("\ntotal [%d] [%d] [%d]",x,y,z);
}

/*
a[0] b[0],c[0]11 22 33
a[1] b[1],c[1]10 20 30
a[2] b[2],c[2]10 20 30
a[3] b[3],c[3]11 22 33
a[4] b[4],c[4]10 20 30
  no    a    b    c   total
 [0] : [11] [22] [33]   [66]
 [1] : [10] [20] [30]   [60]
 [2] : [10] [20] [30]   [60]
 [3] : [11] [22] [33]   [66]
 [4] : [10] [20] [30]   [60]
total [52] [104] [156]
*/