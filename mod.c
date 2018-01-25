#include <stdio.h>

int main(void) {
	int t,k,m,l;
	scanf("%d%d%d",&t,&k,&l);
	m=(t*k)%l;
	printf("%d",m);
	return 0;
}
