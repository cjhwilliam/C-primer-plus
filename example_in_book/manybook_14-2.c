#include <stdio.h>
#include <string.h>
char * s_gets(char *st, int n);
#define MAXTITL 4
#define MAXAUTL 4
#define MAXBKS  100

struct book{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book library[MAXBKS];  //book类型结构的数组
    int count = 0;
    int index;

    printf("please enter the book title.\n");
    printf("press [enter] at the start of a line to stop.\n");
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
           && library[count].title[0] != '\0')
    {
        printf("now enter the author.\n");
        s_gets(library[count].author, MAXAUTL);
        printf("now enter the value.\n");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n')   //弥补了scanf()不能读入\n
            continue;    //清理输入行
        if (count < MAXBKS)
            printf("enter the next title.\n");
    }

    if (count > 0)
    {
        printf("here is the list of your books:\n");
        for (index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", library[index].title,
                   library[index].author, library[index].value);
        printf("here is %c", library[0].author[2]);
    }
    else
        printf("no book? too bad.\n");

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
            *find = '\0';
        else
            while (getchar() != '\n')
            continue;
    }
    return ret_val;
}
