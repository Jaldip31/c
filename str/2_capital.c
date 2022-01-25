//capital
#include<stdio.h>
int main()
{
    int i,j;
    char str[100];

    printf("\n enter string :");
    scanf("%[^\n]",str);
    printf("\nyour string : %s\n",str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]-=32;
        }

    }
     printf("%s",str);

}
/*
enter string :jaldip BHALANi

your string : jaldip BHALANi
JALDIP BHALANI
*/
