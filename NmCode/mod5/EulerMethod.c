#include <stdio.h>
#include <stdlib.h>
float fun(float x, float y)
{
    float f;
    f = y * y - x * x;
    return f;
}
main()
{
    float a, b, x, y, h, t, k;
    system("clear");
    printf("\nEnter x0,y0,h,xn: ");
    scanf("%f%f%f%f", &a, &b, &h, &t);
    x = a;
    y = b;
    printf("\n x\t y\n");
    while (x <= t)
    {
        k = h * fun(x, y);
        y = y + k;
        x = x + h;
        printf("%0.3f\t%0.3f\n", x, y);
    }
    printf(" \n\n ");
    return 0;
}