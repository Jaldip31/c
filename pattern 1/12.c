#include<stdio.h>
int main ()
{
	int i,j,c,a;
	for(i='A';i<='E';i++)
	{
		printf("\n");   
           a=i;	                    // c=i;              
		for(j='A';j<=i;j++)
		{
			printf("%c",a);         //printf("%c",c);
		    a--;                    //  a=c;        
		                            // c=a-1;
		}
   	}	
}