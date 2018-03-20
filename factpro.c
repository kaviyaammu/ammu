#include <stdio.h>

int main(void) {
	int t,k,fact=1;
	scanf("%d",&t);
	for(k=1;k<=t;k++)
	{
		fact=fact*k;
	}
	printf("%d",fact);
	return 0;
}
