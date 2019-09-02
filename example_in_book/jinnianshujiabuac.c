#include <stdio.h>
#include <stdlib.h>

struct node
{
	int start;
	int end;
}a[100];

int cmp(node u,node v)
{
	if(u.end==v.end)
		return u.start > v.start;
	return u.end < v.end; //先排结束时间
}

int main()
{
	int n,i,j,k,t;
	while(scanf("%d",&n) && n!= 0 )
	{
		for(i=0; i<n; i++)
			scanf("%d%d",&a[i].start,&a[i].end);
		sort(a, a+n, cmp); //按照结束时间排序
		for(i=1,t=a[0].end, k=1; i<n; i++)
		{
			if(a[i].start >= t) //开始时间小于结束时间
			{
				t = a[i].end;
				k++;
			}
		}
		printf("%d\n",k);
	}
	return 0;
}
