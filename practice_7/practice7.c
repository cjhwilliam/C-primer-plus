#include<stdio.h>
#include<float.h>

int main(void){

    double v1 = 1.0/3.0;
    float v2 = 1.0/3.0;

    printf("%18.6f %18.6f\n",v1, v2);
    printf("%18.12f %18.12f\n",v1, v2);
    printf("%18.16f %18.16f\n",v1, v2);
    printf("%18d %18d\n",FLT_DIG, DBL_DIG);


}
