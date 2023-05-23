#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float x)
{
    return (pow(x, 3) - 9 * x + 1);
}

int main()
{
    float x0, x1, c;
    printf("Enter x0: ");
    scanf("%f", &x0);

    printf("Enter x1: ");
    scanf("%f", &x1);

    do
    {
        c = (x1 + x0) / 2;
        if (f(x1) * f(c) > 0)
            x1 = c;
        else
            x0 = c;

    } while (fabs(x1 - x0) >= 0.0001);

    printf("Root is: %.4f", c);
}