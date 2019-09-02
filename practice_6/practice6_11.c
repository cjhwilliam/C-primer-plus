#include<stdio.h>
#define SIZE 8

int main (void){

    int num[SIZE];
    printf("please enter 8 number:\n");
    int i, j;

    for(i = 0; i < SIZE; i++)
        scanf("%d",&num[i]);

    for(j = 7; j >= 0; j--)
        printf("%d ",num[j]);   //这里用i也行

    printf("\n");
    printf("done!");

    return 0;
}
//怎么在输入数字超过8个时，只读取前8个？
