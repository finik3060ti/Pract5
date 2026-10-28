#include <stdio.h>
#define H 5

int main(void)
{
    int i, j, s, c;
    for (i = 0; i < H; i++)
    {
        for (s = 0; s < H - i - 1; s++)
        {
            printf(" ");
        }
        c = 1;
        for (j = 0; j <= i; j++)
        {
            printf("%d ", c);
            c = c * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}