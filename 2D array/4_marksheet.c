//marksheet in 2d array
#include<stdio.h>
int main()
{
    int i,j,a[5][5],b[5][5],c[5][5],x=0,y=0,z=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<1;j++)
        {
            printf("Roll no [%d] sub a [%d]",i,j);
            scanf("%d",&a[i][j]);
            x+=a[i][j];
        }
        for(j=0;j<1;j++)
        {
            printf("Roll no [%d] sub b [%d]",i,j);
            scanf("%d",&b[i][j]);
            y+=b[i][j];
        }
        for(j=0;j<1;j++)
        {
            printf("Roll no [%d] sub c [%d]",i,j);
            scanf("%d",&c[i][j]);
            z+=c[i][j];
        }
    }



     printf(" no\ta\tb\tc\ttotal\tpr \tgrade\tP/F\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<1;j++)
        {
            printf("%d",i);
        }
        for(j=0;j<1;j++)
        {
            printf("\t%d",a[i][j]);
        }
        for(j=0;j<1;j++)
        {
            printf("\t%d",b[i][j]);
        }
        for(j=0;j<1;j++)
        {
            printf("\t%d",c[i][j]);
        }
      /*  for(j=0;j<1;j++)
        {
            printf("\t%d",x);
        }
        for(j=0;j<3;j++)
        {s=A[i][j]+B[i][j];
            printf("\t%d",s);
        }
        for(j=0;j<3;j++)
        {m=A[i][j]*B[i][j];
            printf("\t%d",m);
        }
        */
        printf("\n");
    }
}
/*
Roll no [0] sub a [0]1
Roll no [0] sub b [0]2
Roll no [0] sub c [0]3
Roll no [1] sub a [0]4
Roll no [1] sub b [0]5
Roll no [1] sub c [0]6
Roll no [2] sub a [0]7
Roll no [2] sub b [0]8
Roll no [2] sub c [0]9
 no     a       b       c       total   pr      grade      P/F
0       1       2       3
1       4       5       6
2       7       8       9
*/