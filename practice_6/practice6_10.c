#include<stdio.h>

int result(int low, int high);
int main(void){

    printf("enter lower and upper integer limits:");
    int i, j;
    //scanf("%d %d", &i, &j);
    //printf("here is %d\n", result(i, j));

    while(scanf("%d %d",&i, &j)== 2){
            if(i < j){
                result(i, j);
                printf("enter next set of limits:");
            }
            else{
                printf("done\n");
                break;
            }
            //printf("%d", i + j);
            //printf("the result is %d!\n", result(i, j));
    }
    //printf("this is not a number, end!\n");

    return 0;
}

int result(int low, int high){
    int i;
    int square = 0;
    if (low < high){
        for(i = low;i <= high; i++){
            square += i*i ;
        }
        printf("the sums of the squares from %d to %d is %d\n", low*low, high*high, square);
    }
    //else
        //continue;

    return square;
}
