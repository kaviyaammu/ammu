#include <stdio.h>

int main(void) {
	int t,k,l,m;
	scanf("%d%d%d",&t,&k,&m);
	if((m>=t)&&(m<=k))
	printf("%d is between %d and %d",m,t,k);
	else
	printf("%d is not  between %d and %d",m,t,k);
	return 0;
}
