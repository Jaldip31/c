#include<stdio.h>
int main ()
{
	int i,j,a='A',c;                   //a=64;
	for(i='A';i<='E';i++)
	{
		printf("\n");

		for(j='A';j<=i;j++)
		{                         //c=a+1;
			printf("%c",a);       //printf("%d",c); okkk
			a++;                  // a=c;
		}
   	}
}
/* 
A
BC
DEF
GHIJ
KLMNO
*/