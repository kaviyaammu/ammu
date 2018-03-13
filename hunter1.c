#include <stdio.h>

int main(void)
{
	int x,y,n,a[10],t;
	scanf("%d",&n);
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
		for(x=0;x<n;x++)
		{
		    printf("%d",a[x]);
		}
		
		
	return 0;
}
