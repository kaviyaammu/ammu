#include <stdio.h>

int main(void) {
	int t,k;
	scanf("%d%d",&t,&k);
	printf("%d\t%d\n",t,k);
	t=t^k;
	k=t^k;
	t=t^k;
	printf("%d\t%d",t,k);
	return 0;
}
