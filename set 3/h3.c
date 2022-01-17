#include<stdio.h>
int main ()
{
    char ch;
    printf ("Enter char :");
    scanf("%c",&ch);

    printf("your char is %c",ch);

    if(ch<='E'|| ch<='e')
    {

        if(ch<='e')
        {
        printf("-->%c e",ch);
        }
        else
        {
        printf("--> %c E",ch);
        }
    }
    else if( ch<='J' ||ch<='j')
    {
        if(ch<='j')
        {
        printf("-->e %c j",ch);
        }
        else
        {
        printf("-->E %c J",ch);
        }
    }
    else if(ch<='O' || ch<='o')
    {
       if(ch<='o')
        {
        printf("-->j %c o",ch);
        }
        else
        {
        printf("-->J %c O",ch);
        }
    }
    else if(ch<='T' || ch<='t')
    {
        if(ch<='t')
        {
        printf("-->o %c t",ch);
        }
        else
        {
        printf("-->O %c T",ch);
        }
    }
    else if(ch<='Y' || ch<='y')
    {
        if(ch<='y')
        {
        printf("-->%c y",ch);
        }
        else
        {
        printf("--> %c Y",ch);
        }
    }
}