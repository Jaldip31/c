#include<stdio.h>
int main()
{
    int i;

    for(i=1;i<=26;i++)
    {
        if(i%2==1)
        {
        printf("%c-",i+64);
        }
        else
        {
            printf("%c-",i+96);
        }
    }


}