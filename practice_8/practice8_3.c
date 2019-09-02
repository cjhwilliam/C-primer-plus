#include<stdio.h>
int main(void){

    int ch;
    int countup = 0;
    int countlo = 0;

    while ((ch = getchar()) != EOF){
        //putchar(ch);
        if (ch >= 'A' && ch <= 'Z')
            countup++;
        if (ch >= 'a' && ch <= 'z')
            countlo++;

    }
    printf("there are %d upper characters!\nthere are %d lower characters!\n", countup, countlo);

    return 0;
}
