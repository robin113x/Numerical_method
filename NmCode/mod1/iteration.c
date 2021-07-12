#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define f(x) x *x *x + x - 1
#define g(x) 1 / (1 + x * x)
#define e 0.001
int main()
{
    system("clear");
    int i, maxitr;
    float x0, x1;
    printf("Enter initial guess: ");
    scanf("%f", &x0);
    printf("\n\tNo. of iterations\tx0\t\tx1\t\tf(x1)\n");
    for (i = 1; fabs(f(x1)) > e; i++)
    {
        x1 = g(x0);
        printf("\t%d\t\t\t%f\t%f\t%f\n", i, x0, x1, f(x1));
        x0 = x1;
    }
    printf("\nRoot is %f \n\n", x1);
    
    return (0);
}