#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define F(x) x *x *x - 2 * x - 5
#define e 0.001
int main()
{
    system("clear");
    float A, B, x0, f1, f2, f3;
    int i, maxitr;
    printf("\nENTER THE VALUE OF A:");
    scanf("%f", &A);
    printf("\nENTER THE VALUE OF B:");
    scanf("%f", &B);
    printf("\nENTER THE Maximum no. of iterations allowed:");
    scanf("%d", &maxitr);
    f1 = F(A);
    f2 = F(B);
    if (f1 * f2 > 0)
    {
        printf("REAL ROOT DOES NOT EXIST BETWEEN %f and %f \n\n", A, B);
    }
    else
    {
        printf("\nITERATION NO. \t \tVALUE OF A \tVALUE OF B \tVALUE OF X\tVALUE OF F(X)");
        for (i = 1; i <= maxitr; i++)
        {
            x0 = ((A * f2) - (B * f1)) / (f2 - f1);
            f3 = F(x0);
            printf("\n\t%d\t\t%f\t%f\t%f\t%f\n", i, A, B, x0, f3);
            if (f1 * f3 < 0)
            {
                B = x0;
                f2 = f3;
            }
            else
            {
                A = x0;
                f1 = f3;
            }
        }
        printf("\n\n\nHENCE THE ROOT OF THE EQUATION IS %f \n", x0);
    }
    return 0;
}
