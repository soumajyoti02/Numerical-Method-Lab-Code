#include <stdio.h>
#include <math.h>

float f(float x)
{
    return (1 / (1 + x));
}

int main()
{
    float l, u, x[100], y[100], h;
    int n;

    printf("Enter the lower limit: ");
    scanf("%f", &l);

    printf("Enter the upper limit: ");
    scanf("%f", &u);

    printf("Enter the Interval: ");
    scanf("%d", &n);

    h = (u - l) / n;
    for (int i = 0; i <= n; i++)
    {
        x[i] = l + (h * i);
        y[i] = f(x[i]);
    }

    float fourSum = 0.0, twoSum = 0.0;
    for (int i = 1; i < n; i += 2)
    {
        fourSum = fourSum + y[i];
    }

    for (int i = 2; i < n - 1; i += 2)
    {
        twoSum = twoSum + y[i];
    }

    float res = (h / 3) * (y[0] + y[n] + (4 * fourSum) + (2 * twoSum));
    printf("Result is %.3f", res);
}