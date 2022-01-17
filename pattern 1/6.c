#include<stdio.h>
int main ()
{
	int i,j,a;
	for(i='A';i<='E';i++)
	{
		printf("\n");
		                        // a='A';
		for(j='A';j<=i;j++)
		{
			printf("%c",j);     //printf("%d",a); okkk
			                    // a++;
		}
   	}
}