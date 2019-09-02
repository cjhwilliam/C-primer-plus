#include<stdio.h>
void copy_arr(double ar[][5], const double sar[][5], int n);
void copy_ptr(double (*ar)[5], const double (*sar)[5], int n);
void copy_ptrs(double *ar, const double (*sar_start)[5], const double (*sar_end)[5] );

void show_array(const double ar[][5], int n);

int main(void)
{
    const double source[3][5] = {
                                  {1.1, 2.2, 3.3, 4.4, 5.5 },
                                  {6.6, 7.7, 8.8, 9.9, 10.10 },
                                  {11.11, 12.12, 13.13, 14.14, 15.15 }
                                  };
    double target1[3][5];
    double target2[3][5];
    double target3[15];

    copy_arr(target1, source, 3);
    copy_ptr(target2, source, 3);
    copy_ptrs(target3, source, source + 15);

    printf("this is source\n");
    show_array(source, 3);
    printf("this is copy1\n");
    show_array(target1, 3);
    printf("this is copy2\n");
    show_array(target2, 3);
    printf("this is copy3\n");
    show(target3, 15);

    return 0;
}

void show_array(const double ar[][5], int n)
{
    int i,j;
    for (i = 0; i < n; i++)
    {
        for(j = 0; j < 5; j++)
            printf("%5.2lf ", ar[i][j]);
        printf("\n");
    }
    printf("\n");
}

void show(const double ar[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%lf ", ar[i]);
    printf("\n");
}

void copy_arr(double ar[][5], const double sar[][5], int n)
{
    int i,j;

    for (i = 0; i < n; i++)
        for (j = 0; j < 5; j++)
            ar[i][j] = sar[i][j];
    printf("copy1 is completed!\n");

}

void copy_ptr(double (*ar)[5], const double (*sar)[5], int n)
{
    int i, j;

    for (i = 0; i < n; i++)
        for (j = 0; j < 5; j++)
            *(* (ar + i) + j) =  *(* (sar + i) + j);
    printf("copy2 is completed!\n");
}

void copy_ptrs(double *ar, const double (*sar_start)[5], const double (*sar_end)[5] )
{

    while(sar_start < sar_end)
    {
        * ar  = * sar_start;
        ar = ar + 1;
        sar_start = sar_start + 1;
    }
    printf("copy3 is completed!\n");

}
