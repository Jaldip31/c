#include<stdio.h>
int main ()
{
	int i,j,a,c;
	for(i=5;i>=1;i--)
	{
		printf("\n");
		                     //a=6;
		for(j=5;j>=i;j--)
		{                    //c=a-1;
			printf("%d",j);  //printf("%d",c); okkk
			                 //a=c;
		}
   	}
}
/*
5
54
543
5432
54321
*/