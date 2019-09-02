#include <stdio.h>
#include <string.h>
#define LEN 20

char * rev(char * st, char * str);
char *s_gets(char * st, int n);

int main(void)
{
    char string[LEN];
    char str[LEN] = {'0'};
    //char strrev[LEN];
    while(1)
    {
        printf("please enter your string:\n");
        s_gets(string, LEN);
        printf("your is : %s\n", string);
        //strrev = rev(string, str);
        printf("now is : %s\n", rev(string, str));
    }
    return 0;

}

char * rev(char * st, char * str)   //这么传也可以，但感觉这么用函数不太好，因为要对第二个空数组初始化
{
    int len = strlen(st);
    //char strev[len];
    int i;
    printf("the length is %d\n", len);

    for(i = 0; i < len; i++)
        //printf("%c ", st[i]);
        str[len - i - 1] = * (st + i);

    return str;
}

char *s_gets(char * st, int n)
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
