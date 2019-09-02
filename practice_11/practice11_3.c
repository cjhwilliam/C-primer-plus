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
        if(!isspace(ch))  //遇到第一个非空字符，赋给ch，并跳出循环
            break;
    }

    printf("the first is %c\n", ch);
    input[i++] = ch;   //存完以后要加一个，让指针指到下一个元素的位置
    //printf("the is %c\n",ch);
    while(1)
    {
        ch = getchar();
        if(isspace(ch))       //单词后遇到第一个空字符，跳出循环
            break;
        else
            input[i++] = ch;  //读入一个单词
    }
    input[i] = '\0';  //因为是i++， 所以现在的i指向的就是单词最后一个字母的下一个位置，赋'\0'，使其成为字符串

    return ;
}
