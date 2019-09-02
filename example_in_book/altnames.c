#include<stdio.h>
#include<inttypes.h>
int main (void){

int32_t me32;

me32 = 45933945;
printf("first,assume int32_t is int: ");
printf("me32 = %d\n",me32);
printf("next,let's not make any assumptions.\n");
printf("instead, use a \"macro\"from inttypes.h: ");
//printf("me32 = %"+PRID32+"\n",me32); (可能一些编译器还未实现对inttypes.h头文件的支持)

return 0;


}
