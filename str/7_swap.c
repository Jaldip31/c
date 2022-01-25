//swap string :123456-->214365
#include<stdio.h>
int main()
{
    int i,z=1;
    char str[100],a[100];
    printf("enter string :");
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(i%2==0)
        {
            a[i]=str[z];
            z+=2;
        }
        else
        {
            a[i]=str[i-1];
        }
    }
    printf("\n%s",a);
}
/*
enter string :jaldip Bhalani

ajdlpiB ahalin
*/