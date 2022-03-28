#include <stdio.h>
int main()
{
    int i, a = 12, b = 8, p = 2, q = 2;
    int ans1[10], ans2[10], arr[10];
    int x = 0;
    for (i = 0; i <= a; i++)
    {
        if (a % p == 0)
        {
            a = a / p;
            ans1[x++] += p;
        }
        else
        {
            p++;
        }
    }
    printf("\n%d", ans1);
    int y = 0;
    for (i = 0; i <= b; i++)
    {
        if (b % q == 0)
        {
            b = b / q;
            ans2[y++] += p;
        }
        else
        {
            q++;
        }
    }
    printf("\n%d", ans2);

    //         ans1.filter((ele, ind) = > {
    //                 if (ele == ans2[ind])
    //                 {
    //                     arr.push(ele);
    //                 }
    //             }) printf().log(arr);

    //     z = arr.reduce((pv, cv) = > pv * cv, 1);

    //     printf().log(z)
}