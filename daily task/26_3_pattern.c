
#include <stdio.h>
int main()
{
    int sum, sp = 6, n = 6, var;
    int arr[10], temp[10];
    scanf("%d", &var);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 1; j < sp; j++)
            printf("_");
        sp--;
        int ind = 0;
        for (int j = 0; j <= i; j++){
            if (i == j || j == 0){
                printf(" %d", var);
                temp[j] = var;
            }
            else{
                sum = arr[ind] + arr[ind+++1];
                printf(" %d", sum);
                temp[j] = sum;
                // ind++;
            }
        }
        printf("\n");
        for (int k = 0; k < n; ++k){
            arr[k] = temp[k];
        }
    }
}

//pascal's triangle
/*
_____ 1
____ 1 1
___ 1 2 1
__ 1 3 3 1
_ 1 4 6 4 1
 1 5 10 10 5 1
 */
