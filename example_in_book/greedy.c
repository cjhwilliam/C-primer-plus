#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
struct jiemudan{
	int start;
	int end;
	int flag;
}buf[1000];

int main(){
	int i = 0;
	int j = 0;
	int tv;//��Ŀ����
	int jieshou;
	int num;//ʣ���Ŀ��
	int current = 0;//��ǰʱ��
	int min = 0;//���Ž�
	int count = 0;//��Ŀ��
	int d;
	while (scanf("%d",&tv)!= EOF){
        if (tv == 0)
            break;
		for(i=0;i<tv;i++){
			scanf("%d %d",&buf[i].start,&buf[i].end);
			buf[i].flag = 0;
		}
		scanf("%d",&jieshou);
        num = tv;
        while(num != 0){
        	for(i=0; i<tv; i++){
        		if(buf[i].flag==0 && buf[i].start >= current){
        			min = i;
					break;
				}
			}
			printf("%d\n",min);
			for(i=0;i<tv;i++){
        		if(buf[i].flag == 0 && buf[i].start >= current && buf[i].end < buf[min].end){
        			min = i;
					break;
				}
			}
			printf("%d\n",min);

			buf[min].flag=1;
			count++;
			current = buf[min].end;
			num--;

			for(i=0;i<tv;i++){
				if(buf[i].start < current || buf[i].end <= current){
					buf[i].flag=1;
					num--;
				}
			}
			printf("%d\n",num);
		}
		printf("%d\n",count);
	}
}
