#include<stdio.h>
#define SPACE ' '
int main(void){

    char ch;

    ch = getchar();
    while (ch != '\n'){    //��һ��δ����ʱ
         if (ch == SPACE)
            putchar(ch);
         else
            putchar(ch + 1);
         ch = getchar();   //��ȡ��һ���ַ�
    }
    putchar(ch);           //��ӡ�Ǹ�����ѭ���Ļ��з�

    return 0;

}
