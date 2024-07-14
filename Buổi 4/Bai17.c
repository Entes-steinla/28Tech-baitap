#include "stdio.h"

int main ()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        int num = i, tong = 0;
        while (num != 0)
        {
            int dv = num % 10;
            tong += dv * dv * dv;
            num /= 10;
        }
        if (i == tong)
            printf("\n%d", i);
    }
    printf("\n");
    return 0;
}


