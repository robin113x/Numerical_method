#include <stdio.h>
#include <stdlib.h>
float y(float x)
{
    return x * x / (1 + x * x * x);
}
void main()

{
    system("clear");
    float x0, xn, h, s, sum;
    int i, n;
    printf("\n Enter number of subdivision i.e n : ");
    scanf(" %d", &n);
    printf("\n Enter lower limit of integrals i.e x0 : ");
    scanf(" %f", &x0);
    printf("\n Enter upper limit of integral i.e xn : ");
    scanf(" %f", &xn);
    h = (xn - x0) / n;
    s = y(x0) + y(xn) + 4 * y(x0 + h);
    for (i = 3; i <= n - 1; i += 2)
        s += 4 * y(x0 + i * h) + 2 * y(x0 + (i - 1) * h);
    sum = s * (h / 3);
    printf("\n Value of integral is %0.31f \n", sum);
    printf(" \n\n\ ");
}   