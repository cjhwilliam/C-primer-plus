#include<stdio.h>
#define SIZE 8

int main (void){

    int num[SIZE];
    printf("please enter 8 number:\n");
    int i, j;

    for(i = 0; i < SIZE; i++)
        scanf("%d",&num[i]);

    for(j = 7; j >= 0; j--)
        printf("%d ",num[j]);   //������iҲ��

    printf("\n");
    printf("done!");

    return 0;
}
//��ô���������ֳ���8��ʱ��ֻ��ȡǰ8����
