#include<stdio.h>
int main ()
{
	int i,j,a=1;            //a=1;
/*	for(i=1;i<=5;i++)
	{
		printf("\n");

		for(j=1;j<=i;j++)
		{                   // c=a+1;
			printf("%2d",a); //printf("%d",c); okkk
			a++;            // a=c;
		}
   	}*/

	int spp=5,x=1,y=2,z;
	for(i=1;i<=5;i++)
	{
		printf("\n");
		for(j=1;j<=spp;j++)
			printf("__");
		spp--;
		printf("%d",x);
		z=x-1;
		x=x+y++;
		for(j=1;j<i;j++)
			printf("%2d",z--);

	}









}
