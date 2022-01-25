#include<stdio.h>
int main ()
{
	int i,j,ch='a';
	for(i='a';i<='e';i++)
	{
		printf("\n");
		                          
		for(j='a';j<=i;j++)
		if(j%2==1)
		{
			printf("%c",ch);      
			ch++;                      
		}
		else
		{
			printf("%c",ch-32);
			ch++;
		}
   	}	
}
/*
a
bC
dEf
gHiJ
kLmNo
*/