//prime and not prime
#include<stdio.h>
int main()
{
    void prime();
    prime();
}

void prime()
{
    int i,n,count=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
          count++;
    }
    if(count==0){
        printf("prime");
    }else{
        printf("not prime");
    }
}

/*
23
prime
*/




