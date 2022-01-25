//reverse
#include<stdio.h>
int main()
{
/*
    int i,j;
    char str[100];

    printf("\n enter string :");
    scanf("%[^\n]",str);
    printf("\nyour string : %s\n",str);

    for(i=0;str[i]!='\0';i++)
    {
        //printf("\n%d-%c",i,str[i]);
    }
    printf("\nlenth :%d\n",i);

    for(j=i-1;j>=0;j--)
    {
        printf("%c",str[j]);
    }
*/
    int i,j,n;
    char str[100],b[100];
    printf("\n enter string :");
    scanf("%[^\n]",str);

    for(i=0;str[i]!='\0';i++)
    {

    }
    n=i-1;
    for(j=0;j<i;j++)
    {
        b[j]=str[n];
        n--;
    }

    printf("%s",b);
}
/*
enter string :jaldip is
si pidlaj       ~/str/ $
*/