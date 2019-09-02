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
    //printf("%s",st);   //没有换行符
    //puts(st);         // 有换行符
    fputs(st, stdout); //没有换行符
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

    while (1)                             //第一个循环处理单词前面的空白字符
    {
        ch = getchar();
        if(!isspace(ch))
            break;
    }

    input[i++] = ch;                      //开始读入第一个非空白字符

    while(1)                              //第二个循环处理单词后面的字符，但这里并没有处理后面的非空白字符
    {
        ch = getchar();
        if(i >= n || isspace(ch))
            break;
        else
            input[i++] = ch;
    }
    //input[i] = '\0';

    while (getchar() != '\n')   //所以我在这里加上一句，处理缓冲区里单词后面的非空字符，这样世界就清静了
        continue;

    input[i] = '\0';

    return ;
}

