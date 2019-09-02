#include<stdio.h>
#define SIZE 10
double diff(const double array[], int n);

int main(void)
{
    const double arr[SIZE] = { 2.0, 3.7, 5.9, 9.2, 1.67, 0.82, 67.13, -5.23, 34.57, -90.111};
    printf("the diff num is %lf.\n", diff(arr, SIZE)); //第一个参数把首地址传进去就行了， 因为声明时，编译器已经知道这是一个数组

    return 0;
}

double diff(const double array[], int n)
{
    int i;
    double diff_max = array[0];
    double diff_min = array[0];

    for (i = 0; i < n; i++ )
    {
        if (array[i] > diff_max)
            diff_max = array[i];
        if (array[i] < diff_min)
            diff_min = array[i];
    }

    return (diff_max - diff_min);
}
