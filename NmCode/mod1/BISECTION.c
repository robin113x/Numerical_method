#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define e 0.001
#define F(x) x *x *x + x - 1
int main()
{
    system("clear");
    int i;
    float A, B, x0;
    double f1, f2, f3;
    printf("\nENTER THE VALUE OF A:");
    scanf("%f", &A);
    printf("\nENTER THE VALUE OF B:");
    scanf("%f", &B);
    f1 = F(A);
    f2 = F(B);
    if (f1 * f2 > 0)
        printf("REAL ROOT DOES NOT EXIST BETWEEN %f and %f \n\n", A, B);
    else
    {
        printf("ITERATION NO. \tVALUE OF A \tVALUE OF B \tVALUE OF X\tVALUE OF F(X)");
        for (i = 1; (B - A) >= e; i++)
        {
            x0 = (A + B) / 2;
            f3 = F(x0);
            printf("\n\t%d \t %f \t %f \t %f \t %f", i, A, B, x0, F(x0));
            if (f3 * f1 < 0)
            {
                B = x0;
            }
            else
            {
                A = x0;
            }
        }
        printf("\n\n\nHENCE THE ROOT OF THE EQUATION IS %f \n\n", x0);
    }
    return 0;
}
