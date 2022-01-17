#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("skill.txt","w+");
    fprintf(fp,"welcome to skill qode\n");
    fputs("you are learing now.\n",fp);
    fclose(fp);
}