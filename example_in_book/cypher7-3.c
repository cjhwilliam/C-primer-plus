#include<stdio.h>
#include<ctype.h>
int main(void){

    char ch;

    while ( (ch = getchar())
                            != '\n'){

        if (isalpha(ch))    //如果是一个字符
            putchar(ch + 1);
        else
            putchar(ch);   //原样显示
    }
    putchar(ch);

    return 0;
}
