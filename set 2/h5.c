#include <stdio.h>

int main()
{


	float maths,guj,eng,total,pr ;



	printf("Enter marks of Maths,Gujrati,English :");
	scanf("%f%f%f",&maths,&guj,&eng);

	if((maths>33)&&(guj>33)&&(eng>33))
	{
		printf("\nyou are pass");
	}
	else
	{
		printf("\nyou are fail");
	}

	total=maths+guj+eng;
	pr=total/3;

	printf("\nYour total is      :%f",total);
	printf("\nYour percentage is :%f",pr);


	if(pr>75)
	{
	printf("\nYour grade is : A");
	}
	else if(pr<75 && pr>=60)
	{
	printf("\nYour grade is : B");
	}
	else if(pr<60 && pr>=45)
	{
	printf("\nYour grade is : C");
	}
	else if(pr<45 && pr>=35)
	{
	printf("\nYour grade is : D");
	}
	else
	{
	printf("\nSorry, You are fail");
	}







}