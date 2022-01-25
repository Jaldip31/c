// matrix sum, multiply
//matrix A and matrix B
#include<stdio.h>
int main()
{
    int i,j,A[5][5],B[5][5],s,m;
    printf("-----Enter Array A -----\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter A[%d][%d]",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("---- Enter Array B -----\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter B[%d][%d]",i,j);
            scanf("%d",&B[i][j]);
        }

    }


    printf("\t-----matrix A----- \t-----matrix B-----\t-------sum-----\t-----miultification-----\n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",A[i][j]);
        }
        for(j=0;j<3;j++)
        {
            printf("\t%d",B[i][j]);
        }
        for(j=0;j<3;j++)
        {s=A[i][j]+B[i][j];
            printf("\t%d",s);
        }
        for(j=0;j<3;j++)
        {m=A[i][j]*B[i][j];
            printf("\t%d",m);
        }
        printf("\n");
    }

/*Enter A[0][0]1
Enter A[0][1]2
Enter A[0][2]3
Enter A[1][0]4
Enter A[1][1]5
Enter A[1][2]6
Enter A[2][0]7
Enter A[2][1]8
Enter A[2][2]9
---- Enter Array B -----
Enter B[0][0]9
Enter B[0][1]8
Enter B[0][2]7
Enter B[1][0]6
Enter B[1][1]5
Enter B[1][2]4
Enter B[2][0]3
Enter B[2][1]2
Enter B[2][2]1
        -----matrix A-----      -----matrix B-----  -------sum-----  -----miultification-----
        1       2       3       9       8       7   10       10      10      9       16      21
        4       5       6       6       5       4   10       10      10      24      25      24
        7       8       9       3       2       1   10       10      10      21      16      9
*/



}