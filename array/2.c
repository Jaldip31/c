#include<stdio.h>
int main()
{
    int i,stat[5],eng[5];
    for(i=0;i<5;i++)
    {
        printf("enter value of stat [%d] and eng [%d]",i,i);
        scanf("%d%d",&stat[i],&eng[i]);
    }
     printf("\n     stat   eng");
    for(i=0;i<5;i++)
    {

        printf("\n [%d]  :[%d] [%d]",i,stat[i],eng[i]);
    }


}

/*
enter value of stat [0] and eng [0]11 12
enter value of stat [1] and eng [1]12 22
enter value of stat [2] and eng [2]13 23
enter value of stat [3] and eng [3]14 24
enter value of stat [4] and eng [4]15 25

         stat   eng
 [0]  :[11] [12]
 [1]  :[12] [22]
 [2]  :[13] [23]
 [3]  :[14] [24]
 [4]  :[15] [25]
 