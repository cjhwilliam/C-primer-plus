//names_st 结构的头文件
//常量
#ifndef _NAMES_ST_16-6_H_
#define _NAMES_ST_16-6_H_

#include <string.h>
#define SLEN 32

//结构申明
struct names_st
{
    char first[SLEN];
    char last[SLEN];
};

//类型定义
typedef struct names_st names;

//函数原型
void get_names(names *);
void show_names(const names *);
char * s_gets(char * st, int n);

#endif
