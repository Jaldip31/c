//conservation of data and datatype
#include<stdio.h>
int main()
{
    char ch='A';
    int x;
    x=(int)ch;
    printf("%c",ch);
    printf("\n%d",x);

    printf("\n%lu",sizeof(ch));
    printf("\n%lu",sizeof(x));


}