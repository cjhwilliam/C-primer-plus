//names_st �ṹ��ͷ�ļ�
//����
#ifndef _NAMES_ST_16-6_H_
#define _NAMES_ST_16-6_H_

#include <string.h>
#define SLEN 32

//�ṹ����
struct names_st
{
    char first[SLEN];
    char last[SLEN];
};

//���Ͷ���
typedef struct names_st names;

//����ԭ��
void get_names(names *);
void show_names(const names *);
char * s_gets(char * st, int n);

#endif
