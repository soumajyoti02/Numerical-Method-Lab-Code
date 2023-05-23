#include <stdio.h>

float f(float x, float y)
{
    return (x * x + y * y);
}

int main()
{
    float x, y, x0, y0, h;
    float k1, k2, k3, k4, k;

    printf("Enter X0: ");
    scanf("%f", &x0);

    printf("Enter Y0: ");
    scanf("%f", &y0);

    printf("Enter Step length (H): ");
    scanf("%f", &h);

    printf("Enter xn: ");
    scanf("%f", &x);

    int n = (x - x0) / h;
    x = x0;
    y = y0;
    for (int i = 0; i <= n; i++)
    {
        k1 = h * f(x, y);
        k2 = h * f((x + h / 2), (y + k1 / 2));
        k3 = h * f((x + h / 2), (y + k2 / 2));
        k4 = h * f((x + h), (y + k3));

        k = (k1 + (2 * k2) + (2 * k3) + k4) / 6;

        x = x + h;
        y = y + k;
    }

    printf("Ans is: %.5f", y);
}