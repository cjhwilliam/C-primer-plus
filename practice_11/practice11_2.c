#include<stdio.h>
#include<ctype.h>
void get_input(char *input, int n);  //�������ú����������ģ�����ֵ���Ͷ�Ӧ����void

 int main(void)
 {
     char st[20];
     int n;
     printf("please enter a number!\n");
     scanf("%d", &n);
     getchar();   //��������n��ֵ�Ժ���Ǹ�'\n', ����������������������ȥ��
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
     char ch;

     for (i = 0; i < n; i++)
     {
         ch = getchar();
         if (isspace(ch))
            return;
         else
            input[i] = ch;
     }
 }
