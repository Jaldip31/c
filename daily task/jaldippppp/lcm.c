#include <stdio.h>
int main()
{
    int a = 12,
        b = 8,
        p = 2;
    int ans[10];
    int x = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a % p == 0 && b % p == 0)
        {
            a = a / p;
            b = b / p;
            ans[x++] = p;
        }
        else if (a % p == 0 && b % p == 1)
        {
            a = a / p;
            ans[x++] = p;
        }
        else if (a % p == 1 && b % p == 0)
        {
            b = b / p;
            ans[x++] = p;
        }
        else
        {
            p++;
        }
    }
    int fin = 1;
    for (int j = 0; j < 4; j++)
    {
        fin *= ans[j];
    }
    printf("\n%d", fin);
}