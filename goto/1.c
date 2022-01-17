#include<stdio.h>
int main()
{
    int i=1,num;
    scanf("%d",&num);
    table:
    printf("\n%d X %d = %d",num,i,num*i);
    i++;
    if(i<11)
        goto table;
}
/*
5

5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
5 X 4 = 20
5 X 5 = 25
5 X 6 = 30
5 X 7 = 35
5 X 8 = 40
5 X 9 = 45
5 X 10 = 50
*/