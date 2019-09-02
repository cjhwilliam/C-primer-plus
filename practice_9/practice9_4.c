#include<stdio.h>
double ha_mean(double a, double b);

int main(void)
{
    double x, y;
    double z;
    printf("please enter two numbers:\n");
    scanf("%lf %lf", &x, &y);
    z = ha_mean(x, y);
    printf("the harmonic mean is %lf\n", z);
    printf("done!\n");

    return 0;
}

double ha_mean(double a, double b)
{
    double mean;
    mean = ( 1 / a + 1 / b ) / 2;

    return (1 / mean);
}
