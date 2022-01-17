#include<stdio.h>
int main ()
{
//1
{	int i,j;
	for(i=1;i<=5;i++)
	{
		printf("\n");
	                          // a=i;
		for(j=1;j<=i;j++)
		{
			printf("%d",j);     //printf("%d",a); okkk
	                         // a++;

		}

   	}
}
//2
{	int i,j;
	for(i=5;i>=1;i--)
	{
		printf("\n");
		for(j=1;j<=i;j++)
			printf("%d",j);
	}
}

//3
{	int y=4,a,i,j;
	for(i=1;i<=5;i++)
	{
		printf("\n");
		for(a=1;a<=y;a++)
		{
			printf("_");
		}
			y--;

		for(j=i;j>=1;j--)
			printf("%d",j);
	}
}


//4
{	int z=0,i,j;
	for(i=1;i<=5;i++)
		{
		printf("\n");
		for(i=1;i<=z;i++)
			{
				printf("_");
			}
			z++;

		for(j=5;j>=i;j--)

			printf("%d",j);
		}
}







}
