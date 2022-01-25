#include<stdio.h>
int main()
{
    void myfunction(); //fuction declaration

    printf("\n before main...");
    myfunction();       //function calling
    printf("\n after main...");
    return 0;
}
void myfunction()       //function defination
{
    printf("\n\t....inside myfunction....");
}

/*
before main...
        ....inside myfunction....
 after main...
*/
