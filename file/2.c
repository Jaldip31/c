#include<stdio.h>
int main()
{
    //int i;
    FILE *fp;
    char buff[100];
    fp=fopen("skill.txt","r");
    fscanf(fp,"%[^\n]",buff);
    printf("%s\n",buff);
    fclose(fp);
}

/*
welcome to skill qode
*/