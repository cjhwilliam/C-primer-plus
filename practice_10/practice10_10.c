#include<stdio.h>
#define SIZE 4
void sum(int arr1[], int arr2[], int arr3[], int n);
void show(const int arr[], int n);
int main(void)
{
    int array1[SIZE] = {2, 4, 5, 8};
    int array2[SIZE] = {1, 0, 4, 6};

    int array3[SIZE];
    sum(array1, array2, array3, SIZE);
    show(array3, SIZE);

    printf("that is all\n");

    return 0;
}

void show(const int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void sum(int arr1[], int arr2[], int arr3[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        arr3[i] = arr1[i] + arr2[i];
    printf("done!\n");
}
