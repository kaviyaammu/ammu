#include <stdio.h>

int main(void)
{
	int t,k=1,x,y;
	scanf("%d",&t);
	while(t!=0)
	{
		k=t%10;
		if(k%2!=0)
		{
		printf("%d\t",k);
		}
		t=t/10;
		
	}
	return 0;
}
