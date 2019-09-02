#include<stdio.h>
#include<stdlib.h>   //为了使用exit）
int main(void)
{
    int ch;
    FILE * fp;
    char fname[50];  //save file name

    printf("enter the name of the file: ");
    scanf("%s", fname);
    fp = fopen(fname, "r"); //open the file waitting to read
    if (fp == NULL)   //if fail
    {
        printf("failed to open file. bye\n");
        exit(1);
    }  //exit program
    // getc(fp):get the first character from the opening file
    while ((ch = getc(fp)) != EOF)
        putchar(ch);
    fclose(fp);  //close file

    return 0;
}

