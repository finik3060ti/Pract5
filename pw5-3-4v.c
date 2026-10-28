#include <stdio.h>

int main(void)
{
    int n, c;
    double sum, zn;
    printf("N: ");
    scanf("%d", &n);

    while (n > 0)
    {
        sum = 0;
        zn = 1;
        for (c = 1; c <= n; c++)
        {
            sum += zn / c;
            zn = -zn;
        }
        printf("SUM: %.6f\n", sum);

        printf("N: ");
        scanf("%d", &n);
    }

    return 0;
}