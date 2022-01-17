/*
#include <stdio.h>

int main()
{


    int unit ;
    float a=0.60, b=0.80, c=0.90, x, y, z,i;

	printf("Enter unit :");
	scanf("%d",&unit);

	x=(unit*a)+50;
	y=(100*a)+((unit-100)*b)+50;
	z=(100*a)+(200*b)+((unit-300)*c)+50;
	i=(z+(z*0.15));

	if(unit<=100)
	{
		printf("\nyour electricity bill is : %f",x);
	}
	else if(unit>=100 && unit<300)
	{
		printf("\nyour electricity bill is : %f",y);
	}
    else if(unit>=300 && z<300)
	{
	    printf("\nyour electricity bill is : %f",z);
	}
	else if(unit>=300 && z>300)
	{
   printf("\nyour electricity bill (with extra charge) is : %f",i);
    }

}
*/


#include <stdio.h>
#include <conio.h>
int main()
{


    int unit ;
    float i;

	printf("Enter unit :");
	scanf("%d",&unit);

	i=((unit-300)*0.90)+270;

	if(unit<=100)
	{
		printf("\nyour electricity bill is : %f",(unit*0.60)+50);
	}
	else if(unit>=100 && unit<300)
	{
   printf("\nyour electricity bill is : %f",((unit-100)*0.80)+110);
	}
    else if(unit>=300 && i<300)
	{
	    printf("\nyour electricity bill is : %f",i);
	}
	else
	{
   printf("\nyour electricity bill (with extra charge) is : %f",(i+(i*0.15)));
    }

}
