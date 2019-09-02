#include<stdio.h>
#include<stdbool.h>

int main(void){

    printf("please enter a number: ");

    int num;
    int i;
    int div;
    int isPrime;

    scanf("%d", &num);
    for(i = 1; i <= num; i++){

        for(div = 2, isPrime = true; div * div <= i; div++){

            if (i % div == 0)
                isPrime = false;

            } // 判断是否是素数
        if (isPrime)
            printf("%d ", i);
        }  //循环判断所有小于num的数

    printf("\ndone!\n");

    return 0;
}
