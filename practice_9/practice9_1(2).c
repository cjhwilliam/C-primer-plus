#include<stdio.h>
double imin(double, double);

int main(void)
{
    double evil1, evil2;

    printf("enter a pair of double numbers (q to quit):\n");

    while(scanf("%lf %lf", &evil1, &evil2) == 2)
    {
        printf("the lesser of %lf and %lf is %lf.\n",
               evil1, evil2, imin(evil1, evil2));
        printf("enter a pair of double numbers (q to quit):\n");
    }
    printf("bye.\n");

    return 0;
}

double imin(double n, double m)
{
    double min;

    if (n < m)
        min = n;
    else
        min = m;

    return min;
}
