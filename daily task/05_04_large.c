#include <stdio.h>
int main()
{
    int arr[10] = {55, 40, 41, 80, 70, 21, 8, 6, 5, 55};
    int ans[10], temp;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n%d", arr[0]);
    printf("\n%d", arr[1]);
}