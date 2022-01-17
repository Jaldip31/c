// A 65 b 98
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=26;i++)
    {
        if(i%2!=0)
        {
        printf("%c - %d"\n,i+64,i+64);
        }
        else
        {
            printf("%c - %d",i+96,i+96);
        }
    }
}
