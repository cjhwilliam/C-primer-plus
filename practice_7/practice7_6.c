#include<stdio.h>
#define SIZE 50

int main(void){

    char pre;
    char ch;
    int n = 0;

    while((ch = getchar()) != '#'){
        if (ch == 'e'){
            pre = ch;
            continue;
        }
        if (ch == 'i' && pre == 'e')
            n++;
        }
    printf("there are %d 'ei'", n);

    return 0;
}
