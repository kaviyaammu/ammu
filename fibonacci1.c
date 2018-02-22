#include <stdio.h>

int main(void) {
	int t,f=0,s=1,x,flag=1;
	scanf("%d",&t);
	for(x=0;x<t;x++)
	{
		flag=f+s;
		f=s;
		s=flag;
		printf("%d\t",flag);
	}
	return 0;
}
