#include<stdio.h>
#include<string.h>
struct item{
    char value[32];
}LIST[100];
int main(){
    int m;
    scanf("%d",&m);
    int size=0;
    while(m--){
        char mis[6];
        scanf("%s",mis);
        if(mis[0]=='a'){
            scanf("%s",&LIST[size].value);
            size++;
        }
        else if(mis[0]=='p')
            LIST[size].value = '\0';
            size--;
        else{
            int i;
            scanf("%d",&i);
            if(i<0){
                printf("%s\n",LIST[size+i].value);
            }
            else
                printf("%s\n",LIST[i-1].value);
        }
    }
}
