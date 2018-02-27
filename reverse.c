#include <stdio.h>

int main(void) {
	int t,k=1,x;
	scanf("%d",&t);
	while(t!=0)
	{
		k=t%10;
		printf("%d",k);
		t=t/10;
		
	}
	return 0;
}
