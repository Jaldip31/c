//winding and unwinding
#include<stdio.h>
void recur (int n)
{
    printf("\n wining %d",n);
    if(n<3)
    {
        recur (n+1);
    }
    printf("\n\t unwindind %d",n);
}
int main()
{
    recur(1);
}
/*
 wining 1
 wining 2
 wining 3
         unwindind 3
         unwindind 2
         unwindind 1*/