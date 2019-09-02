#include<stdio.h>

char * mystrncpy(char * s1, char * s2, int n);
char * s_gets(char * st, int n);

int main(void)
{
    char string1[256];
    char string2[256];
    int string1_length = 0;
    int string2_length = 0;
    char c = 0;

    while (c != '#')
    {
        printf("please enter string1:\n");
        s_gets(string1, 256);
        printf("please enter string2:\n");
        s_gets(string2, 256);

        string1_length = strlen(string1);
        string2_length = strlen(string2);

        printf("the first original string: ");
        puts(string1);
        mystrncpy(string1, string2, (256 - string1_length));
        printf("after mystrncpy, the first string: ");
        puts(string1);

        printf("do you want to quit?(# to quit)\n");
        scanf("%c", &c);
        getchar();

    }
    printf("done!\n");
    return 0;

}

char * mystrncpy(char * s1, char * s2, int n)
{
    int s1_length = strlen(s1);
    int s2_length = strlen(s2);
    int copy_length = (s2_length >= n ? n : s2_length);
    int i;

    for (i = 0; i < copy_length; i++)
        s1[s1_length + i] = s2[i];
    if (s2_length < n)
        s1[s1_length + s2_length] = '\0';
    else
        return s1;
}

char * s_gets(char * st, int n)
{
    char *ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if(ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if(st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')   //=='\n',跳出整个循环， !='\n'跳出此次循环，表示把其他非换行字符都读一下
                continue;
    }
    return ret_val;
}
