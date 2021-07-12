#include <stdio.h>
#include <stdlib.h>
#define MAX 10
void main()
{
    float x[MAX], y[MAX], k = 0, z, nr, dr;
    int i, j, m;
    system("clear");
    printf("\n enter the range ");
    scanf("%d", &m);
    printf("\n enter the x value ");
    for (i = 0; i < m; i++)
        scanf("%f", &x[i]);
    printf("\n enter the y value ");
    for (i = 0; i < m; i++)
        scanf("%f", &y[i]);
    printf("\n enter value of x for which respective y is to be calculated ");
    scanf("%f", &z);
    for (i = 0; i < m; i++)
    {
        nr = 1;
        dr = 1;
        for (j = 0; j < m; j++)
        {
            if (j != i)
            {
                nr = nr * (z - x[j]);
                dr = dr * (x[i] - x[j]);
            }
        }
        k = k + ((nr / dr) * y[i]);
    }
    printf("\n final result=%f\n", k);
    printf("\n\n");
    
}