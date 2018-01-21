include <stdio.h>

int main(void)
{
	int i,j,n,a[10],t;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i]<=a[j])
			a[i]=t;
			t=a[j];
			a[j]=t;
			
		}
		}
		for(j=0;j<n;i++)
		{
			printf("%d\n",a[i]);
		}
	return 0;
}
