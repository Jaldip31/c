#include<stdio.h>
int main ()
{
	int i,j,a=1;
	for(i=1;i<=5;i++)
	{
		printf("\n");                                 
		for(j=1;j<=i;j++)
		if(a%2==1)
		{
			printf("1");
			a++;
		}
		else
		{
			printf("0");     
	        a++;    
		}	
   	}	
}