#include<stdio.h>
#include<ctype.h>

void get_word(char * input, int n);

int main(void)
{
    char st[200];
    int n;
    int next;

    printf("please enter your number:\n");
    scanf("%d", &n);
    printf("please enter your words:\n");
    get_word(st, n);
    printf("the word is:\n");
    //for(int i = 0; i < 200; i++)
    //   printf("%c",st[i]);
    //printf("%s",st);   //û�л��з�
    //puts(st);         // �л��з�
    fputs(st, stdout); //û�л��з�
    scanf("%d", &next);
    printf("%d\n", next);
    printf("done!");

    return 0;
}

void get_word(char * input, int n)
{
    int i = 0;
    int count = 0;
    char ch;

    while (1)                             //��һ��ѭ��������ǰ��Ŀհ��ַ�
    {
        ch = getchar();
        if(!isspace(ch))
            break;
    }

    input[i++] = ch;                      //��ʼ�����һ���ǿհ��ַ�

    while(1)                              //�ڶ���ѭ�������ʺ�����ַ��������ﲢû�д������ķǿհ��ַ�
    {
        ch = getchar();
        if(i >= n || isspace(ch))
            break;
        else
            input[i++] = ch;
    }
    //input[i] = '\0';

    while (getchar() != '\n')   //���������������һ�䣬���������ﵥ�ʺ���ķǿ��ַ�������������徲��
        continue;

    input[i] = '\0';

    return ;
}

