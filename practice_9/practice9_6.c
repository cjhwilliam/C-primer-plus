#include<stdio.h>
void sort_three(double *u, double *v, double *w);
int main(void)
{
    double x, y, z;
    printf("please enter three number:\n");
    scanf("%lf %lf %lf", &x, &y, &z);
    printf("originally x = %lf and y = %lf and z = %lf.\n", x, y, z);
    sort_three(&x, &y, &z);
    printf("now x = %lf and y = %lf and z = %lf.\n", x, y, z);

    return 0;
}

void sort_three(double *u, double *v, double *w)
{
    double temp;
    temp = *u;
    if (*v <= temp)
    {
        temp = *v;
        *v = *u;
        if (*w <= temp)
        {
            temp = *w;
            *w = *v;
        }
    }
    *u = temp;
    if (*v >= *w)
        *w = *v;
}
