#include <stdio.h>

int main()
{


	float income ;

	printf("Enter your income : ");
	scanf("%f",&income);

	if(income<=2500)
	{
		printf("Your tax is: 00");
	}
	else if(income>2500 && income<=5000)
	{
		printf("Your tax is : %f",(income-2500)*0.10);
	}
	else if(income>5000 && income<=10000)
	{
		printf("Your tax is : %f",(income-5000)*0.20+250);
	}
	else
	{
		printf("Your tax is : %f",(income-10000)*0.30+1250);
	}

}