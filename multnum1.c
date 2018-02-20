#include <stdio.h>

int main(void) 
{
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		if(t%i==0)
		printf("%d\t",i);
	}
	return 0;
}
