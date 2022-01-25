#include<stdio.h>
int main ()
{
	int i,j,a=1;            //a=1;
	for(i=1;i<=5;i++)
	{
		printf("\n");

		for(j=1;j<=i;j++)
		{                   // c=a+1;
			printf("%2d",a); //printf("%d",c); okkk
			a++;            // a=c;
		}
   	}
/*
 1
 2 3
 4 5 6
 7 8 9 10
11 12 13 14 15
*/










}
