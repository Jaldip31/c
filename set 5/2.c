//1,4,3,16,5
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<10;i++)
    {
        if(i%2==0)
        {
        printf("%d\n",i*i);
        }
        else
        {
            printf("%d\n",i);
        }

    }
}