#include<stdio.h>
#define SIZE 10
int max(const int array[], int n);

int main(void)
{
    const int arr[SIZE] = { 2, 3, 5, 9, 1, 0, 67, -5, 34, -90};
    printf("the max num is %d.\n", max(arr, SIZE)); //��һ���������׵�ַ����ȥ�����ˣ� ��Ϊ����ʱ���������Ѿ�֪������һ������

    return 0;
}

int max(const int array[], int n)
{
    int i;
    int max_int = array[0];

    for (i = 0; i < n; i++ )
    {
        if (array[i] > max_int)
            max_int = array[i];
    }

    return max_int;
}
