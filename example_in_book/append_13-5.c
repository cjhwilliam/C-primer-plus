//���ļ����ӵ���һ���ļ�ĩβ
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE *source, FILE *dest);
char * s_gets(char *st, int n);

int main(void)
{
    FILE *fa, *fs;   //faָ��Ŀ���ļ��� fsָ��Դ�ļ�
    int files = 0;   //���ӵ��ļ�����
    char file_app[SLEN];   //Ŀ���ļ���
    char file_src[SLEN];   //Դ�ļ���
    int ch;

    puts("enter name of destination file:");
    s_gets(file_app, SLEN);
    if ((fa = fopen(file_app, "a+")) == NULL)   //�޷������ģʽ�򿪸��ļ�
    {
        fprintf(stderr, "can't open %s\n", file_app);
        exit(EXIT_FAILURE);
    }
    if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
    {
        fputs("can't create output buffer\n", stderr);
        exit(EXIT_FAILURE);
    }
    puts("enter name of first source file (empty line to quit):");
    while (s_gets(file_src, SLEN) && file_src[0] != 0)
    {
        if (strcmp(file_src, file_app) == 0)   //��ֹ������ļ�����������ĩβ

            fputs("can't append file to itself\n", stderr);
        else if ((fs = fopen(file_src, "r")) == NULL)
            fprintf(stderr, "can't open %s\n", file_src);
        else
        {
            if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
            {
                fputs("can't create input buffer\n", stderr);
                continue;
            }
            append(fs, fa);
            if (ferror(fs) != 0)
                fprintf(stderr, "error in reading file %s.\n", file_src);
            if (ferror(fa) != 0)
                fprintf(stderr, "error in writing file %s.\n", file_app);
            fclose(fs);
            files++;
            printf("file %s appended.\n", file_src);
            puts("next file (empty line to quit):");
        }
    }
    printf("done appending. %d files append.\n", files);
    rewind(fa);
    printf("%s content:\n", file_app);
    while ((ch = getc(fa)) != EOF)
        putchar(ch);
    puts("done displaying.");
    fclose(fa);

    return 0;
}

void append(FILE *source, FILE *dest)
{
    size_t bytes;
    static char temp[BUFSIZE];   //ֻ����һ��

    while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
        fwrite(temp, sizeof(char), bytes, dest);
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');  //���һ��з�
        if (find)    //�����ַ���ǿ�
            *find = '\0' ; //�ڴ˴���һ�����ַ�
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}
