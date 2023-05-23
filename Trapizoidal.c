#include <stdio.h>
#include <math.h>

int main()
{
    float l, u;
    int n;
    float h;

    printf("Enter the lower limit: ");
    scanf("%f", &l);
    printf("Enter the upper limit: ");
    scanf("%f", &u);
    printf("Enter the number of steps: ");
    scanf("%d", &n);

    h = (u - l) / n;
    float x[100], y[100];

    for (int i = 0; i <= n; i++)
    {
        x[i] = l + (h * i);
        y[i] = x[i] / cos(x[i]);
    }
    float sum = 0.0;
    for (int i = 1; i < n; i++)
    {
        sum = sum + y[i];
    }
    float result = h / 2 * (y[0] + y[n] + (2 * sum));
    printf("Result is %.3f", result);
}