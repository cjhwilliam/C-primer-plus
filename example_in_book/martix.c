#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int a[6][6]={0};
int b[6][6]={0};
int c[6][6]={0};

int main(){
	int n;
	int i,j,k;
	int result[6][6]={0};
	int temp[6][6]={0};
	while(scanf("%d",&n)!=EOF){
		while(n--){
			for(i=1; i<6; i++) {
                for(j=1; j<6; j++)
			    {
                    scanf("%d", &a[i][j]);//���ö�ά����洢��һ������
                    //result[i][j]=a[i][j];
                }
            }

            for(i=1; i<6; i++) {
                for(j=1; j<6; j++)
			    {
                    scanf("%d", &b[i][j]);//���ö�ά����洢�ڶ�������
                }
            }

            for(i=1; i<6; i++)
	        {
                for(j=1; j<6; j++)
		        {
                    for(k=1; k<6; k++)
			        {
            	        temp[i][j]+=a[i][k]*b[k][j];
			        }
                }
            }

            for(i=1; i<6; i++) {
                for(j=1; j<6; j++)
			    {
                    scanf("%d", &c[i][j]);//���ö�ά����洢��3������
                }
            }

            for(i=1; i<6; i++)
	        {
                for(j=1; j<6; j++)
		        {
                    for(k=1; k<6; k++)
			        {
            	        result[i][j]+=temp[i][k]*c[k][j];
			        }
                }
            }

//
            for(i=1; i<6; i++) {
                for(j=1; j<6; j++)
			    {
                    printf("%d",result[i][j]);
                    if(j==5){
                    	printf("\n");
					}else{
						printf(" ");
					}
                }
            }
		}
	}
}
