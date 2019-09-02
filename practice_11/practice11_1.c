#include<stdio.h>
void get_input(char *input, int n);  //像这种用函数获得输入的，返回值类型都应该是void

 int main(void)
 {
     char st[20];
     int n;
     printf("please enter a number!\n");
     scanf("%d", &n);
     getchar();   //接受输入n的值以后的那个'\n', 不把他读到函数的数组里去。
     get_input(st, n);
     printf("your input is :\n");
     for (int i = 0; i < n; i++)
        printf("%c", st[i]);
     printf("\ndone!");

     return 0;
 }

void get_input(char *input, int n)
 {
     int i;

     for (i = 0; i < n; i++)
            *(input + i) = getchar();  //保证所有字符都读进来
     *(input + n ) = '\0';     //结尾加上'\0' ,保证他是一个字符串，可以用%s来打印
 }
