#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,a[100][2],cnt,s,t1,t2,end;
    while(scanf("%d",&s)&&(s!=0))
   {
       cnt=1;
       for(i=0;i<s;i++)
       {
            for(j=0;j<2;j++)
            {
                scanf("%d",&a[i][j]);
            }
       }
       for(i=0;i<s-1;i++)
       {
             for(j=i+1;j<s;j++) { if(a[i][1]>a[j][1])
                   {
                      t1=a[j][1];
                      a[j][1]=a[i][1];
                      a[i][1]=t1;
                      t2=a[j][0];
                      a[j][0]=a[i][0];
                      a[i][0]=t2;

                       }
                  }
       }
    end=a[0][1];
    for(i=1;i<s;i++)
    {
        if(a[i][0]>=end)
        {
            cnt++;
            end=a[i][1];
        }
    }


   printf("%d",cnt);
    printf("\n");
    }
    return 0;
}
