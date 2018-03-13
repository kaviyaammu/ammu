#include <stdio.h>

int main(void)
{
	int x,y,n,k,a[10],t;
	scanf("%d%d",&n,&k);
	for(x=0;x<n;x++)
	{
	scanf("%d",&a[x]);
	}
	for(x=0;x<n;x++)
	{
		for(y=x+1;y<n;y++)
		{
			if(a[x]<a[y])
			{
			t=a[x];
			a[x]=a[y];
			a[y]=t;
			}
		}
	}
		    printf("%d",a[k-1]);
		
		
	return 0;
}
