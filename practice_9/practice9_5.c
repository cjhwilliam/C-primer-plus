#include<stdio.h>
void larger_of(double *u, double *v);
int main(void)
{
    double x = 5.634, y = 4.321;
    printf("originally x = %lf and y = %lf.\n", x, y);
    larger_of(&x, &y);
    printf("now x = %lf and y = %lf.\n", x, y);

    return 0;
}

void larger_of(double *u, double *v)
{
    double temp;
    if (*u >= *v)
        *v = *u;
    else
        *u = *v;
}
