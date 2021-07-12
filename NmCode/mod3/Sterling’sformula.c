#include <stdio.h>
#include <stdlib.h>
void main()
{
    float ax[30], ay[30], h, x, y, t1 = 1, t2 = 1, u;
    int n, i, j, m, k;
    system("clear");
    printf("enter the value of n\n");
    scanf("%d", &n);
    printf("\n enter length of each interval \n");
    scanf("%f", &h);
    printf("enetr the value of x and y \n");
    for (i = 0; i < n; i++)
    {
        scanf("%f %f", &ax[i], &ay[i]);
    }
    printf("enter the value of x for which value of y is wanted\n");
    scanf("%f", &x);
    printf("\n enter the location of x0 i.e k\n");
    scanf("%d", &k);
    y = ay[k];
    u = (x - ax[k]) / h;
    m = n;
    if (k <= n / 2)
        n = 2 * k;
    else
        n = 2 * (n - k);
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < m - i; j++)
            ay[j] = ay[j + 1] - ay[j];
        if (i % 2 != 0)
        {
            t1 = (t1 * (u - i / 2)) / i;
            t2 = (t2 * (u + i / 2)) / i;
        }
        else
        {
            t1 = (t1 * (u + i / 2)) / i;
            t2 = (t2 * (u - i / 2)) / i;
        }
        y = y + (t1 * ay[k - (i + 1) / 2] + t2 * ay[k - i / 2]) / 2;
    }
    printf("\n value of y at x=%.2f is %.2f", x, y);
    printf("\n\n");
}
