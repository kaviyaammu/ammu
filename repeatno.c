#include <stdio.h>

int main(void) {
	int t,k,m,add=0;
	scanf("%d%d",&t,&k);
	while(t!=0)
	{
		m=t%10;
		if(m==k)
		{
			add++;
		}
		t=t/10;
	}
	printf("%d",add);
	return 0;
}
