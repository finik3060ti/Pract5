#include <stdio.h>

int main(void)
{
    double arr[8];
    int i, c = 0;
    for (i = 0; i < 8; i++)
    {
        scanf("%lf", &arr[i]);
    }
    for (i = 0; i < 8; i++)
    {
        c += ((int)arr[i] % 2 == 0);
    }
    for (i = 0; i < 8; i++)
    {
        printf("%.2f ", arr[i]);
    }
    
    printf("\n");
    printf("%.2f\n", (double)c);

    return 0;
}