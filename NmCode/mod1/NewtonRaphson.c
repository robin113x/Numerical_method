#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define e 0.001
float F(float x)
{
    return x * x * x + x - 1;
}
float DF(float x)
{
    return 3 * x * x + 1;
}
int main()
{
    system("clear");
    int maxitr, i;
    float x0, x1, h;
    printf("\nENTER THE INITIAL VALUE OF A:\t");
    scanf("%f", &x0);
    printf("\nENTER THE MAXIMUM NO. OF ITERATIONS ALLOWED:\t");
    scanf("%d", &maxitr);
    if (DF(x0) != 0)
    {
        printf("\n\nNRM IS APPLICABLE\n\n");
        printf("\tITERATION NO.\t VALUE OF X\t\t VALUE OF F(X)");
        for (i = 1; i <= maxitr; i++)
        {
            h = F(x0) / DF(x0);
            x1 = x0 - h;
            printf("\n\t\t %d \t\t %f\t\t %f", i, x1, F(x1));
            if (fabs(h) < e)
            {
                printf("\n\n\nHENCE THE ROOT OF THE EQUATION IS %f\n\n", x1);
            }
            x0 = x1;
        }
    }
    else
        printf("NRM IS NOT APPLICABLE \n\n");
}