#include<stdio.h>
#include<ctype.h>
int main(void){

    char ch;

    while ( (ch = getchar())
                            != '\n'){

        if (isalpha(ch))    //�����һ���ַ�
            putchar(ch + 1);
        else
            putchar(ch);   //ԭ����ʾ
    }
    putchar(ch);

    return 0;
}