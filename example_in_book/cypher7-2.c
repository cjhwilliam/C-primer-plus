#include<stdio.h>
#define SPACE ' '
int main(void){

    char ch;

    ch = getchar();
    while (ch != '\n'){    //当一行未结束时
         if (ch == SPACE)
            putchar(ch);
         else
            putchar(ch + 1);
         ch = getchar();   //获取下一个字符
    }
    putchar(ch);           //打印那个跳出循环的换行符

    return 0;

}
