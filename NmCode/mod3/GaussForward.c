#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <process.h>
#include <string.h>
void main()
{
    int n;
    int i, j;
    float ax[10];
    float ay[10];
    float x;
    float nr, dr;
    float y = 0;
    float h;
    float p;
    float diff[20][20];
    float y1, y2, y3, y4;
    system("clear");
    printf(" Enter the number of terms : ");
    scanf("%d", &n);
    printf("\n Enter the value in the form of x : ");
    for (i = 0; i < n; i++)
    {
        printf(" Enter the value of x%d : ", i + 1);
        scanf("%f", &ax[i]);
    }
    printf(" Enter the value in the form of y : ");
    for (i = 0; i < n; i++)
    {
        printf("Enter the value of y%d : ", i + 1);
        scanf("%f", &ay[i]);
    }
    printf("\n  Enter the value of x for : ");
    printf("\n  which you want the value of y : ");
    scanf("%f", &x);
    h = ax[1] - ax[0];
    for (i = 0; i < n - 1; i++)
    {
        diff[i][1] = ay[i + 1] - ay[i];
    }
    for (j = 2; j <= 4; j++)
    {
        for (i = 0; i < n - j; i++)
        {
            diff[i][j] = diff[i + 1][j - 1] - diff[i][j - 1];
        }
    }
    i = 0;
    do
    {
        i++;
    } while (ax[i] < x);
    i--;
    p = (x - ax[i]) / h;
    y1 = p * diff[i][1];
    y2 = p * (p - 1) * diff[i - 1][2] / 2;
    y3 = (p + 1) * p * (p - 1) * diff[i - 2][3] / 6;
    y4 = (p + 1) * p * (p - 1) * (p - 2) * diff[i - 3][4] / 24;
    y = ay[i] + y1 + y2 + y3 + y4;
    printf("\n  when x = %6.2f,y = %6.3f ", x, y);
    printf("\n\n");
    
}