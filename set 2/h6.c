#include <stdio.h>

int main()
{
	clrscr();
	int i;
	printf("Enter value :");
	scanf("%d",&i);

	if((i>2000)&&(i<3000))
	{
		printf("print : x");
	}
	else if((i>100)&&(i<150))
	{
		printf("print : y");
	}
	else
	{
		printf("Sorry, not found");
	}





}
