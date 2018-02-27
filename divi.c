#include <stdio.h>

int main(void) {
	int t,k=0,x;
	scanf("%d",&t);
	for(x=1;x<=t;x++)
	{
		if(t%x==0)
		k++;
	}
	if(k>2)
	printf("Yes");
	else
	printf("no");
	return 0;
}
