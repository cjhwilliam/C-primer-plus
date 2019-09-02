//curb
#include<stdio.h>
int curb(int n);
int main(void){

    int num, result;

    printf("enter a number plsaes:\n");
    scanf("%d", &num);
    curb(num);

    printf("done!\n");

    return 0;
}

int curb(int n){

    int r;
    r = n*n*n;
    printf("the result is %d\n", r);

}
