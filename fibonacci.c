#include <stdio.h>

int main(void) {
	int t,k,i,sum=0,n;
	scanf("%d",&n);
	t=0;
	k=1;
	for(i=0;i<n;i++)
	{
		sum=k+t;
		t=k;
		k=sum;
	}
	printf("%d",sum);
	
	return 0;
}
