#include<stdio.h>
int main()
{
    float x,y,b,m,z,i;
    printf("enter hour minit :");
    scanf("%f%f",&x,&b);

    y=b/5;
    m=0.5*b;

    if(x>y)
    {
        i=(x-y)*30;
        z=i+m;
        if(z>180)
        {
        printf("Your engle is %0.2f",360-z);
        }
        else
        {
         printf("Your engle is %0.2f",z);
        }
    }
    else if(x<y)
    {
            i=(y-x)*30;
            z=i-m;

                if(z>180)
                {
                printf("Your engle is %0.2f",360-z);
                }
                else
                {
                 printf("Your engle is %0.2f",z);
                }
    }
    else if(x==y)
    {
            i=(x-y)*30;
            z=i+m;
            printf("Your engle is %0.2f",z);
    }

}


// i=hour*30-minit*5.5