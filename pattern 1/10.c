#include<stdio.h>
int main ()
{
	int i,j,a,c=5;
	for(i=5;i>=1;i--)
	{
		printf("\n");
	    a=i;                    // c=a=i;
		for(j=5;j>=i;j--)
		{
			printf("%d",a);     //printf("%d",c); okkk
	        a++;                // a=c;
	                            //c=a+1;
		}

   	}
}
/*
5
45
345
2345
12345
*/