//����һ����һ�������ĺ���
#include<stdio.h>
void pound(int n);//����ԭ������
int main(void){

    int times = 5;
    char ch = '!'; //ascll����33
    float f = 6.0f;

    pound(times);
    pound(ch);    //same as pound((int)ch);
    pound(f);     //same as pound((int)f);

    return 0;
}

void pound(int n){

    while (n-- > 0)
        printf("#");
    printf("\n");
}
