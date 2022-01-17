#include<stdio.h>
int main ()
{
    char ch;


    printf("Enter char :");
    scanf("%c",&ch);

    printf("\nchar is : %c",ch);



if(ch=='a'|| ch=='A'|| ch=='e'||ch=='E'|| ch=='I'||ch=='i'||ch=='o'||ch=='O'||ch=='u'||ch=='U' )
 {
     printf("\n%c char is vowel",ch);
 }
else
{
   printf("\n%c char is consonants",ch);
}

}