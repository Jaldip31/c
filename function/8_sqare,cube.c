// sqare,cube
//1
#include<stdio.h>
// int main()
// {
//     void sqare(int);
//     sqare(1);
// }

// void sqare(int x)
// {

//     void cube(float);
//     printf("\nno %d\n",x);
//     printf("sqare %d\n",x*x);
//     cube(x);
//     if(x<10)
//     {
//         sqare(x+1);
//     }
// }

// void cube(float x)
// {
//     printf("cube %0.2f\n",x*x*x);
// }
//2
/*
#include<stdio.h>

int main()
{
    int recur(int);
    recur(1);
}

int recur(int x)
{
    printf("\nno %d",x);
    printf("\nsqare %d",x*x);
    printf("\ncube %d\n",x*x*x);
    if(x<11)
    {
        recur(x+1);
    }

    return 0;
}
*/

//3

int main()
{
    int i;
    int sqare(int),cube(int);
    for(i=1;i<11;i++)
    {
        printf("\nno %d",i);
        printf("\nsqare %d",sqare(i));
        printf("\ncube %d\n",cube(i));
    }

}
int sqare(int x)
{
    return x*x;
}
int cube(int x)
{
    return x*x*x;
}


/*
no 1
sqare 1
cube 1.00

no 2
sqare 4
cube 8.00

no 3
sqare 9
cube 27.00

no 4
sqare 16
cube 64.00

no 5
sqare 25
cube 125.00

no 6
sqare 36
cube 216.00

no 7
sqare 49
cube 343.00

no 8
sqare 64
cube 512.00

no 9
sqare 81
cube 729.00

no 10
sqare 100
cube 1000.00
*/