#include<stdio.h>
#include<ctype.h>

void get_word(char * input);

int main(void)
{
    printf("please enter your words:\n");
    char st[200];
    get_word(st);
    printf("the word is:\n");
    //for(int i = 0; i < 200; i++)
    //    printf("%c",st[i]);
    printf("\n--------------\n");
    printf("%s",st);

    return 0;
}

void get_word(char * input)
{
    int i = 0;
    char ch;

    while(1)
    {
        ch = getchar();
        if(!isspace(ch))  //������һ���ǿ��ַ�������ch��������ѭ��
            break;
    }

    printf("the first is %c\n", ch);
    input[i++] = ch;   //�����Ժ�Ҫ��һ������ָ��ָ����һ��Ԫ�ص�λ��
    //printf("the is %c\n",ch);
    while(1)
    {
        ch = getchar();
        if(isspace(ch))       //���ʺ�������һ�����ַ�������ѭ��
            break;
        else
            input[i++] = ch;  //����һ������
    }
    input[i] = '\0';  //��Ϊ��i++�� �������ڵ�iָ��ľ��ǵ������һ����ĸ����һ��λ�ã���'\0'��ʹ���Ϊ�ַ���

    return ;
}
