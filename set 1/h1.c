#include <stdio.h>

int main()
{

	int a,b;
	printf("Enter the value of a and b :");
	scanf("%d%d",&a,&b);

	if(a<b)
	{
		printf("a(%d) is smallest then b(%d)",a,b);
	}
	else
	{
		printf("b(%d) is smallest then a(%d)",b,a);
	}

}