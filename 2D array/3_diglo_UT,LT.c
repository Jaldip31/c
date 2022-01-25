//1
//diago
//upper table
//lower table
//2
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,a[5][5],x=0,y=0,z=0;
    printf("\t-----matrix A-----\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("enter[%d][%d]",i,j);
           scanf("%d",&a[i][j]);
        }

    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {(i==j)?x+=a[i][j]:(i<j)?y+=a[i][j]:(i>j)?z+=a[i][j]:0;
           printf("\t%d",a[i][j]);
        }
        printf("\n");
    }

//1
        printf("\ndiago%d",x);
        printf("\nUt%d",y);
        printf("\nLt%d",z);


//2
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
             printf("\t%d",a[j][i]);
            }
        printf("\n");
    }
}
/*
        -----matrix A-----
enter[0][0]1
enter[0][1]2
enter[0][2]3
enter[1][0]4
enter[1][1]5
enter[1][2]6
enter[2][0]7
enter[2][1]8
enter[2][2]9
        1       2       3
        4       5       6
        7       8       9

diago15
Ut11
Lt19    1       4       7
        2       5       8
        3       6       9
*/