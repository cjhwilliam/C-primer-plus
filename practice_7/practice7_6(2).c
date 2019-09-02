#include<stdio.h>

int main(void){

    char ch;
    char pre = 0;
    int n = 0;

    while ((ch = getchar()) != '#'){

        if((pre == 'e') && (ch == 'i'))
            n++;
        pre = ch;
    }
    printf("%d times", n);

    return 0;
}
