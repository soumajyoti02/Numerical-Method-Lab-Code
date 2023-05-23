#include <stdio.h>
int main()
{
    float x[100], y[100], xp, yp = 0, p;
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("Enter X[%d]: ", i);
        scanf("%f", &x[i]);

        printf("Enter y[%d]: ", i);
        scanf("%f", &y[i]);
    }
    printf("Enter the interpolating point: ");
    scanf("%f", &xp);

    for (int i = 1; i <= n; i++)
    {
        p = 1;
        for (int j = 1; j <= n; j++)
        {
            if (i != j)
            {
                p = p * (xp - x[j]) / (x[i] - x[j]);
            }
        }

        yp = yp + (p * y[i]);
    }
    printf("Interpolating value of %.4f is : %.4f", xp, yp);
}