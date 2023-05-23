#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float f(float x)
{
    return pow(x, 3) - (9 * x) + 1;
}

int main()
{
    float x0, x1, x, c;
    printf("Enter the X0: ");
    scanf("%f", &x0);

    printf("Enter the X1: ");
    scanf("%f", &x1);

    if (f(x0) * f(x1) > 0)
        return 0;

    do
    {
        x = x1 - (f(x1) * (x1 - x0) / (f(x1) - f(x0)));
        if (f(x1) * f(x) > 0)
        {
            x1 = x;
        }
        else
            x0 = x;
    } while (fabs(x1 - x0) >= 0.0001);

    printf("xult is: %.3f", x);
}