#include<stdio.h>
#define ROW 3
#define CUL 5
void show_array(const int ar[][CUL], int n);
void dou_arr(int arr[][CUL], int n);

int main(void)
{
    int array[ROW][CUL] = { {1, 2, 3, 4, 5},
                            {2, 4, 6, 8, 10},
                            {3, 6, 9, 12, 15}
                            };
    printf("this is original array:\n");
    show_array(array, ROW);
    dou_arr(array, ROW);
    printf("this is double array:\n");
    show_array(array, ROW);

    return 0;
}

void show_array(const int ar[][CUL], int n)
{
    int i,j;
    for (i = 0; i < n; i++)
    {
        for(j = 0; j < CUL; j++)
            printf("%d ", ar[i][j]);
        printf("\n");
    }
    printf("\n");
}

void dou_arr(int arr[][CUL], int n)
{
    int i,j;
    for (i = 0; i < n; i++)
    {
        for(j = 0; j < CUL; j++)
            arr[i][j] *= 2;
    }
}
