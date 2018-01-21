include <stdio.h>

int main(void) {
	int i,j,n,a[n];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(j=0;j<n;j++)
		{
		for(i=0;i<n;i++)
		{
			printf("%d\t\t%d\n",j,a[i]);
	}
	}
	return 0;
}
