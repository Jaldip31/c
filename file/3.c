#include<stdio.h>
int main()
{
    int i;
    FILE *fp;
    fp=fopen("1.c","r");
    int ch=getc(fp);
    while(ch!=EOF)
    {
        putchar(ch);
        ch=getc(fp);
    }
    if(feof(fp))
        printf("end of file reached");
    else
        printf("something went wrong");

    fclose(fp);
}