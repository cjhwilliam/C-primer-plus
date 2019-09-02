#include<stdio.h>
int main(void){

    char ch;
    int count = 0;

    while ((ch = getchar()) != EOF){
        putchar(ch);
        count++;
    }
    printf("there are %d characters!\n", count);

    return 0;
}
