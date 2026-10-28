#include <stdio.h>
#include <math.h>

int main(void)
{
    double a = 0, b = 5, h = 1;
    double x;
    int n = 1;
    for (x = a; x <= b; x += h)
    {
        printf("%d %.4f %.4f\n", n, x, sqrt(x*x + 1));
        n++;
    }
    return 0;
}