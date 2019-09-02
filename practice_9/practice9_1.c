#include<stdio.h>
double min(double x, double y);

int main(void)
{
    double x;
    double y;

    printf("enter two number, please: ");

    scanf("%lf, %lf", &x, &y);
    printf("you already enter two number: %f, %f\n", x, y);
    //printf("between %f and %f, the min number is %lf.", x, y, min(x, y));

    return 0;
}

double min(double x, double y)
{
    double min;

    printf("%f, %f\n", x, y);

    if (x > y)
        min = y;
    else
        min = x;
    //else
        //printf("%f is equal %f.\n", x, y);

    return min;
}
