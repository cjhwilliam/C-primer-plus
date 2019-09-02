/*一本书的图书目录*/
#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n);
#define MAXTITL 41  //书名的最大长度 + 1
#define MAXAUTL 31  //作者姓名的最大长度 + 1

struct book{          //结构体模板，标记是book
    char title [MAXTITL];
    char author [MAXAUTL];
    float value;
};

int main(void)
{
    struct book library;   //把library声明为一个book类型的变量

    printf("please enter the book title.\n");
    s_gets(library.title, MAXTITL);   //访问title部分
    printf("now enter the author.\n");
    s_gets(library.author, MAXAUTL);
    printf("now enter the value.\n");
    scanf("%f", &library.value);
    printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
    printf("%s: \"%s\" ($%.2f)\n", library.author
           , library.title, library.value);
    printf("done.\n");

    return 0;
}

char * s_gets(char *st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');   //查找换行符
        if (find)
            * find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val; //输入字符串的地址
}//写这么一大串，就是为了处理fgets（）处理不了的换行符和超出n的输入
