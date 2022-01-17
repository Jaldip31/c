//1,4,12,32,80
#include<stdio.h>
int main ()
{
    int i,j=1;

     for(i=1;i<10;i*=2)
     {
        printf("%d\n",i*j++);
     }
}