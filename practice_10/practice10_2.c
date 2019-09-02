#include<stdio.h>
void copy_arr(double ar[], const double sar[], int n);
void copy_ptr(double *ar, const double *sar, int n);
void copy_ptrs(double *ar, const double *sar_start, const double *sar_end );

void show_array(const double ar[], int n);

int main(void)
{
    const double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    //copy_arr(target1, source, 5);
    //copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);

    show_array(source, 5);
    //printf("this is copy1\n");
    //show_array(target1, 5);
    //printf("this is copy2\n");
    //show_array(target2, 5);
    printf("this is copy3\n");
    show_array(target3, 5);

    return 0;
}

void show_array(const double ar[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%lf ", ar[i]);
    printf("\n");
}

void copy_arr(double ar[], const double sar[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        ar[i] = sar[i];
    printf("copy1 is completed!\n");

}

void copy_ptr(double *ar, const double *sar, int n)
{
    int i;

    for (i = 0; i < n; i++)
        * (ar + i) = * (sar + i);
    printf("copy2 is completed!\n");
}

void copy_ptrs(double *ar, const double *sar_start, const double *sar_end )
{

    while(sar_start < sar_end)
    {
        * ar  = * sar_start;
        ar++;
        sar_start++;
    }
    printf("copy3 is completed!\n");

}
