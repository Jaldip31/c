//WAWR use pointer
//bubble sort
#include<stdio.h>
int* Bubble_sort(int a[]);
int main()
{

    int i;
    int arr[10]={10,9,7,101,23,44,12,78,34,23};
    int *p=Bubble_sort(arr);
    for(i=0;i<10;i++)
    {
        printf("%d\t",*(p+i));
    }
        return 0;
}
int* Bubble_sort(int a[])
{
    int i,j,temp;
    for(i=0;i<10;i++)
    {

        for(j=i+1;j<10;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return a;
}
/*
7       9       10      12      23      23      3444       78      101  */
