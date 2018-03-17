#include <stdio.h>

int main(void) 
{
	int t,k,i,m;
	scanf("%d%d",&t,&k);
	for(i=1;i<=t&&i<=k;i++)
	{
		if(t%i==0&&k%i==0)
		{
			m=i;
		}
	}
	printf("%d",m);
	return 0;
}
