/*
#include <stdio.h>

int main()
{
	clrscr();
	float salary,HRA,DA,Total,x,y,t;
	
	printf("Enter your salary :");
	scanf("%f",&salary);
	
	if(salary<5000)
	{ x=salary*0.08,y=salary*0.20,t=salary+(x+y);
	    printf("\nyour HRA is :%f",x);
		printf("\nyour DA is :%f",y);
		printf("\nyour total salary is :%f",t);
		}
	else if(salary>5000 && salary<=10000)
	{ x=salary*0.12,y=salary*0.30,t=salary+(x+y);
	    printf("\nyour HRA is :%f",x);
		printf("\nyour DA is :%f",y);
		printf("\nyour total salary is :%f",t);
		}
	else if(salary>10000 && salary<=15000)
	{ x=salary*0.15,y=salary*0.40,t=salary+(x+y);
	    printf("\nyour HRA is :%f",x);
		printf("\nyour DA is :%f",y);
		printf("\nyour total salary is :%f",t);
		}
	else 
	{ x=salary*0.20,y=salary*0.50,t=salary+(x+y);
	    printf("\nyour HRA is :%f",x);
		printf("\nyour DA is :%f",y);
		printf("\nyour total salary is :%f",t);
		}
	*/
	
		
		
	
#include <stdio.h>

int main()
{
	clrscr();
	float salary,x,y,t,HRA,DA;
	
	printf("Enter your salary :");
	scanf("%f",&salary);
	
	if(salary<5000)
	{HRA=0.08;DA*0.20;}
	else if(salary>5000 && salary<=10000)
	{HRA=0.12;DA=0.30;}
	else if(salary>10000 && salary<=15000)
    {HRA=0.15;DA=.40;}
	else
	{HRA=0.20;DA*0.50;}
     x=salary*HRA; y=salary*DA;	t=salary+(x+y);
	    printf("\nyour HRA is :%f",x);
		printf("\nyour DA is :%f",y);
		printf("\nyour total salary is :%f",t);
	
}
