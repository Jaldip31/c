//  Any loop and condition lasts up to 1 and if 0 occurs it will be excluded from the loop or condition.
//  logical operators return 0(false) and 1(true).
//  printf() executed back to front and
//          print front to back.

#include<stdio.h>
int main(){
//1
    // {int i=23;
    // // i=30>25;     // 1
    // // i=30<25;     // 0
    // // i=!i>25;     // 0
    // // printf("i = %d",!i);                                                                                                          //0

    // printf("i = %d",i);} //i=0

//2
    // float c[10];
    // printf("%d\n",abs(&c[4]-&c[8])/(&c[8]-&c[4]));                                                                                       //1

//3
    // int a=200,b=10,m,n;
    // m=a++ && b++;
    // printf("\n%d",m);              //1
    // printf("\t%d",!m);             //0

    // m=!(a++ && b++);
    // printf("\n%d",m);              //0
    // printf("\t%d",!m);             //1

    // n=(--a||--b);
    // printf("\n%d",n);               //1
    // printf("\t%d",!n);              //0

    // n=!(--a||--b);
    // printf("\n%d",n);               //0
    // printf("\t%d",!n);              //1

    // int a,b,m,n;
    // m=a && b;
    // printf("%d",m);                     //1
    // n=a||b;
    // printf("%d",n);                     //1

    // int a=0,b=0,m,n;
    // m=a && b;
    // printf("%d",m);                     //0
    // n=a||b;
    // printf("%d",n);                     //0

    // int a=56,b=56,m,n;
    // m=a++ && b++;
    // printf("%d",m);                     //1
    // n=a++||b++;
    // printf("%d",n);                     //1

//    int a=56,b=96,m,n;
//     m=a++ && b++;
//     printf("%d",m);                     //1
//     n=--a||--b;
//     printf("%d",n);                     //1

    // int a=4,b=0,m,n;
    // m=a++ && b++;
    // // printf("%d",m);                     //1
    // n=--a||--b;
    // // printf("%d",n);                     //1
    // printf("%d,%d,%d,%d",a,b,m,n);                                                       //4,1,0,1

//4
// do{
//     printf("keep");
// }while(!printf("moving"));                                                                                                                  //keepmoving

//5
    // {int i=3;
    // N:printf("%d",i);                                                                                                                   //3,6,9
    // i+=3;
    // if(i<=10)
    //     goto N;}

//6
    // int x=11,y=67;
    // (x)?printf("never settle"):printf("be you");            //never settle
    // (!x)?printf("never settle"):printf("be you");           //be you
    // (!(x&&y))?printf("never settle"):printf("be you");      //be you
    // (!(x||y))?printf("never settle"):printf("be you");      //be you
    
    // if(!(x&&y))
    //     printf("never settle");
    // else
    //     printf("be you");                                                                                                                   //be you  
// printf("%d",x&&y);

//7
    // {int i=20,j=200,n=2000;
    // n=j%i++ +j%i--;
    // printf("%d",n); }                                                                                                                //2011

//8
    // int x=0,z;
    // // z=!(x||1)?(x||1):(x&&1);
    // // printf("%d",z);                   //0                                                                                                 
    // z=(x||1)?(x||1):(x&&1);
    // printf("%d",z);                                                                                                                     //1

//9
    // char str[50]="pushyourself";
    // int n = printf("\n%s",str);                 //pushyourself
    // printf("\nn: %d",str);                        //n: 13

//10
    // int i=2;
    // while(7-i++)
    //     printf("%d",i);                                                                                                                 //34567

//11
    // int i=20,j=30,k=40;
    // i=j,j=k,k=i;
    // printf("%d\t%d\t%d",i++,--i,i++);
    // printf(printf("\t%d",i++),printf("\t%d",--j),printf("\t%d",k++));  //     30      39      31

//12
    // char character='D';
    // int num = 32,value;
    // value = character + num;
    // printf("%c-%d",value,value);                                                                                                        //d-100

//13
    // int i=2,j=2;
    //     // printf("\n%d",--i&&j++);
    // for(--i&&j++;i<11;i+=2){        
    //     printf("loop");                                                                                                                         //looplooplooplooploop
    // }

//14
    // float a,b,c;
    // printf("%d",(scanf("%f%f%f",&a,&b,&c)));                                                                                                    //3


}