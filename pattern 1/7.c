#include<stdio.h>
int main ()
{
	int i,j,ch='A';
	for(i='A';i<='E';i++)
	{
		printf("\n");

		for(j='A';j<=i;j++)
		if(i%2==1)
		{
			printf("%c",ch);
			ch++;
		}
		else
		{
			printf("%c",ch+32);
			ch++;
		}
   	}
}
/*
A
bc
DEF
ghij
KLMNO
*/