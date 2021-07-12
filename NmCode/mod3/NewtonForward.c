#include <stdio.h>
#include <stdlib.h>
#define MAXN 100
#define ORDER 4
main()
{
    system("clear");
    float ax[MAXN + 1], ay[MAXN + 1], diff[MAXN + 1][ORDER + 1], nr = 1.0,dr = 1.0, x, p, h, yp;
    int n, i, j, k;
    printf("\n  Enter the value of n: ");
    scanf("%d", &n);
    printf("\n  Enter the values in form x,y: \n");
    for (i = 0; i <= n; i++)
        scanf("%f %f", &ax[i], &ay[i]);
    printf("\n  Enter the value of x for which the value of y is wanted: ");
    scanf("%f", &x);
    h = ax[1] - ax[0];
    for (i = 0; i <= n - 1; i++)
        diff[i][1] = ay[i + 1] - ay[i];
    for (j = 2; j <= ORDER; j++)
        for (i = 0; i <= n - j; i++)
            diff[i][j] = diff[i + 1][j - 1] - diff[i][j - 1];
    i = 0;
    while (!(ax[i] > x))
        i++;
    i--;
    p = (x - ax[i]) / h;
    yp = ay[i];
    for (k = 1; k <= ORDER; k++)
    {
        nr *= p - k + 1;
        dr *= k;
        yp += (nr / dr) * diff[i][k];
    }
    printf("\n  When x = %6.1f, corresponding y = %6.2f\n", x, yp);
    printf("\n\n");
    return 0;
}