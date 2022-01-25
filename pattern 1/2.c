#include<stdio.h>
int main ()
{
	int i,j;                   //a=1;
	for(i=1;i<=5;i++)
	{
		printf("\n");

		for(j=1;j<=i;j++)
		{
			printf("%d",i);     //printf("%d",a); okkk
		}
		                        //a++;
   	}
}
/*
1
22
333
4444
55555
*/