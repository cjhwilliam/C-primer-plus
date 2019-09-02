#include<stdio.h>
#define SIZE 10
int max_index(const double array[], int n);

int main(void)
{
    const double arr[SIZE] = { 2.2, 3.5, 5.6, 99.7, 1.3, 0.4, 67.8, -5.4, 34.6, -90.1};
    printf("the max num is in %d.\n", max_index(arr, SIZE));

    return 0;
}
int max_index(const double array[], int n)
{
    int i;
    double max_int = array[0];
    int index;

    for (i = 0; i < n; i++ )
    {
        if (array[i] > max_int)
        {
            max_int = array[i];
            index = i + 1;
        }
    }

    return index;
}
