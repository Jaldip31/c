
//type of 
//NANR
/*
#include<stdio.h>
int main()
{
  int dosum();
  dosum();
}
int dosum()
{
    int a,b;
    printf("\nenter a :");
    scanf("%d",&a);
    printf("\nenter b :");
    scanf("%d",&b);
    printf("\n a+b :%d",a+b);
    return 0;
}
*/
//NAWR
/*
#include<stdio.h>
int main()
{
  int dosum();
  printf("\n a+b :%d",dosum());
}
int dosum()
{
    int a,b;
    printf("\nenter a :");
    scanf("%d",&a);
    printf("\nenter b :");
    scanf("%d",&b);
    return a+b;
}
*/

/*
//WAWR
#include<stdio.h>
int main()
{
    int dosum();
    int a,b;
    printf("\nenter a :");
    scanf("%d",&a);
    printf("\nenter b :");
    scanf("%d",&b);
    dosum(a,b);
    return 0;
}
int dosum(int x,int y)
{
    printf("\n a+b :%d",x+y);
    return 0;
}
*/

//WAWR // most of this use 
#include<stdio.h>
int main()
{
    int dosum(int,int);
    int a,b;
    printf("\nenter a :");
    scanf("%d",&a);
    printf("\nenter b :");
    scanf("%d",&b);
    printf("\n a+b :%d",dosum(a,b));
    return 0;
}
int dosum(int x,int y)
{

    return x+y;
}

