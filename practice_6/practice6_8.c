#include<stdio.h>

float result(float i, float j);
int main(void){

    printf("please enter two numbers:\n");
    float i, j, k;

    while(scanf("%f %f",&i, &j)!=0){
            //k = ( i - j ) / ( i * j );
            //result(i, j);
            printf("the result is %f!\n", result(i, j));
    }
    printf("this is not a number, end!");

    return 0;
}

float result(float i, float j){
    float k = ( i - j ) / ( i * j );

    return k;
}
