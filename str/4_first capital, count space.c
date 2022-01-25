// first capital, count space
#include<stdio.h>
int main()
{
    int i,s=0;
    char str[100];
    printf("\nenter string :");
    scanf("%[^\n]",str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==32)
        {
           s+=1;
           str[i+1]-=32;
        }
        else if(i==0)
        {
            str[i]-=32;
        }
    }
        printf("\n%s",str);
        printf("\nspace :%d",s);
}
/*
enter string :jaldip bhalani

Jaldip Bhalani
space :1
*/