#include<stdio.h>
int main()
{
	char ch,i ;
	printf("Enter char is : ");
	scanf("%c",&ch);

	printf("your char is : %d",ch);

	if(ch>=A && ch<=Z) //if(ch>=65 && ch<=97)
	{ i=(ch+32);
	printf("\n ch:%cyour lower case is  : %c",ch,i);
	}

	else if(ch>=a && ch<=z)
	{ i=(ch-32);
	printf("\n ch:%cyour lower case is  : %c",ch,i);
	}
}