#include <stdio.h>

int main(void) {
	int t,k,temp=0;
	scanf("%d%d",&t,&k);
	temp=t;
	t=k;
	k=temp;
	printf("%d\t\t%d",t,k);
	return 0;
}
