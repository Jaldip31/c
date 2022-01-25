//Recurssion
#include<stdio.h>
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    printf("\n factotial : %d",fact(5));
}

/*
factotial : 120
*/