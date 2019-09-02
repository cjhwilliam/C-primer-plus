#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
struct jiemudan{
	int start;
	int end;
}buf[1000];

int main(){
	int i = 0;
	int j = 0;
	int temp1=0;
	int temp2=0;
	int tv;//节目数量
	int jieshou;
	int current = 0;
	int count=0;
	while(scanf("%d",&tv) != EOF){
		for(i=0;i<tv;i++){
			scanf("%d %d",&buf[i].start,&buf[i].end);
		}
		scanf("%d",&jieshou);

		for(i=0;i<tv;i++){
			for(j=0; j<tv-i-1; j++){
				if(buf[j].end > buf[j+1].end){
					temp1 = buf[j].end;
					buf[j].end = buf[j+1].end;
					buf[j+1].end = temp1;
					temp2 = buf[j].start;
					buf[j].start = buf[j+1].start;
					buf[j+1].start = temp2;
				}
			}
		}

//		for(i=0;i<tv;i++){
//			printf("%d %d\n",buf[i].start,buf[i].end);
//		}

		current = buf[0].end;
		count++;
		for(i=0;i<tv;i++){
			if(buf[i].start>=current&&buf[i].end>current){
				count++;
				current=buf[i].end;
			}
			printf("%d %d %d %d\n",current,buf[i].start,buf[i].end,count);
		}
        printf("%d\n",count);
	}
}
