#include<stdio.h>
#define ROW 3
#define CUL 5
void scan(int arr[ROW][CUL]);
int ave(int *arr);
float ave_all(int arr[ROW][CUL]);
int max(int arr[ROW][CUL]);
void show(const int arr[ROW][CUL]);

int main(void)
{
    int array[ROW][CUL];
    scan(array);
    show(array);
    printf("the average_all is %f\n", ave_all(array));
    printf("the max number is %d\n", max(array));

    int i;
    for (i = 0; i < ROW; i++)
        printf("the average of %d is %d\n", i+1, ave(array[i]));

    printf("that is all!\n");
    return 0;
}

void scan(int arr[ROW][CUL])
{
    int i, j;
     for (i = 0; i < ROW; i++)
    {
        for(j = 0; j < CUL; j++)
            scanf("%d", &arr[i][j]);
    }
    printf("input done!\n");
}

void show(const int arr[ROW][CUL])
{
    int i,j;
    for (i = 0; i < ROW; i++)
    {
        for(j = 0; j < CUL; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    printf("\n");
}

float ave_all(int arr[ROW][CUL])
{
    int i, j;
    int sum = 0;
    float average = 0.0;

    for (i = 0; i < ROW; i++)
        for(j = 0; j < CUL; j++)
           sum += arr[i][j];
    average = sum / (ROW * CUL);

    return average;
}

int max(int arr[ROW][CUL])
{
    int i, j;
    int max = 0;
    for (i = 0; i < ROW; i++)
        for(j = 0; j < CUL; j++)
        {
            if ( max < arr[i][j] )
                max = arr[i][j];
        }
    return max;
}

int ave(int *arr)
{
    int j;
    int average;

    for (j = 0; j < CUL; j++)
        average += * ( arr + j );
    average /= CUL;

    return average;
}
