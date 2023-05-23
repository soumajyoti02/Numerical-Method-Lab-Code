#include <stdio.h>
#include <math.h>

float f(float x)
{
    return (pow(x, 3) - (9 * x) + 1);
}

float df(float x)
{
    return (3 * pow(x, 2) - 9);
}

int main()
{
    float e, curr, prev, b, c;
    printf("Enter the accuracy: ");
    scanf("%f", &e);

    printf("Enter the Initial value: ");
    scanf("%f", &curr);
    prev = curr;
    do
    {
        b = prev;
        curr = prev - (f(prev) / df(prev));
        prev = curr;
    } while (fabs(b - curr) > e);

    printf("Root is %.6f", curr);
}