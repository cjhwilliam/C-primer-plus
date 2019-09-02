#include<stdio.h>

int main(void){

     int num;
     int even, odd, even_cou, odd_cou;
     even = odd = even_cou = odd_cou = 0;
     printf("please enter an number:");
     scanf("%d", &num);
     while (num != 0){

        if ((num % 2) == 0 && num != 0){
            even_cou++;
            even += num;
        }
        else{
            odd_cou++;
            odd += num;
        }
        printf("please enter another number:");
        scanf("%d", &num);
     }
     printf("there are %d even,average is %d,\nthere are %d odd,average is %d\n",
            even_cou, even/even_cou, odd_cou, odd/odd_cou);
     printf("done!");

     return 0;
}
