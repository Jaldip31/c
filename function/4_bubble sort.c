//WANR
//bubble sort
#include<stdio.h>
void Bubble_sort(int a[]);
int main()
{

    int i;
    int arr[10]={10,9,7,101,23,44,12,78,3444,23};
    Bubble_sort(arr);
    for(i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
        return 0;
}
void Bubble_sort(int a[])
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
}
/*7       9       10      12      23      23      44      78      101     3444 */

