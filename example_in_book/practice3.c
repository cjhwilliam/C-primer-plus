#include<stdio.h>
void jolly(void);
void deny(void);
int main(void){

jolly();
printf(",");
jolly();
printf(",");
jolly();
printf("\n");
deny();

return 0;

}

void jolly(void){
printf("for he's a jolly good fellow!");

}

void deny(void){
printf("which nobody can deny\n");
}
