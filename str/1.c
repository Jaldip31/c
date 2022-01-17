#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
//1
    /*
    char str[10];
    printf("\n enter string :");
    scanf("%s",str);
    printf(" \n str : %s",str);
    */
/*
enter string :jaldip

 str : jaldip
*/

//2
/*
 //127 character
  char str[1];
    printf("\n enter string :");
    scanf("%[^\n]",str);
    printf(" \n str : %s",str);

enter string :skill code

 stri : skill codeSegmentation fault
 */

 //3
 /*
    char str[1];
    printf("\n enter string :");
    gets(str);
    puts(str);
*/
//4
    int i;
    char str[100];
        printf("\n enter string :");
        scanf("%[^\n]",str);
        printf(" \n str : %s",str);
        for(i=0;str[i]!='\0';i++)
        {

        }
             printf("\n lenth : %d",i);

/*
    enter string :skill code

 str : skill code
 lenth : 10
 */



}
