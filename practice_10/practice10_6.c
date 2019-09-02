#include<stdio.h>
#define SIZE 5
void rev(double array[], int n);
void show(const double array[], int n);

int main(void)
{
    double arr[SIZE] = {3.2, 5.7, 6.9, 1.4, 9.8};
    printf("the original array is:");
    show(arr, SIZE);
    rev(arr, SIZE);
    printf("the reverse array is:");
    show(arr, SIZE);

    return 0;
}

void show(const double array[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%lf ", array[i]);
    printf("\n");
}

//void rev(double array[], int n)       //另申请一个数组，倒叙存入新数组，再赋给原数组
//{
 //   int i;
  //  double pa[n];
   // for(i = 0; i < n; i++)
   //     pa[i] = array[n - 1 - i];
    //for (i = 0; i < n; i++)
      //  array[i] = pa[i];

//}

void rev(double array[], int n)    //采用取中间点，然后前后交换的方法，不用开一整个数组
{
    int i;
    double temp = 0;

    //if ((n % 2) == 1)
    //{
        for (i = 0; i < n / 2 ; i++)
        {
            temp = array[i];
            array[i] = array[n - 1- i];
            array[n - 1- i] = temp;
        }
    //}
    //else
    //{
      //  for (i = 0; i <= (n - 1 - i); i++)
        //{
          //  temp = array[i];
            //array[i] = array[n - 1- i];
            //array[n - 1- i] = temp;
        //}
    //}
}






