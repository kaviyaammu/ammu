#include <stdio.h>

int main(void) {
	int a,b,c,d,e;
	scanf("%d",&a);
	b=a%10;
	c=a/10;
	d=c%10;
	e=c/10;
	printf("the addition of digits are %d",b+d+e);
	return 0;
}
