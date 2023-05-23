#include <stdio.h>
float f(float x, float y)
{
    return (x + y);
}
// Formula: y(n+1) = yn + (h * f(xn, yn))

int main()
{
    float x0, y0, xn, yn, h, prev;
    int n;

    printf("Enter x[0]: ");
    scanf("%f", &x0);

    printf("Enter y[0]: ");
    scanf("%f", &y0);

    printf("Enter x[n]: ");
    scanf("%f", &xn);

    printf("Enter the No of Steps: ");
    scanf("%d", &n);
    h = (xn - x0) / h;

    for (int i = 0; i < n; i++)
    {
        yn = y0 + (h * f(x0, y0));
        x0 = x0 + h;
        y0 = yn;
    }
    printf("Ans is: %.4f", yn);
}
