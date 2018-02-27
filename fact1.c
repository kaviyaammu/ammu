#include<stdio.h>
int main(void)
{
	int a,x,fact=1;
	scanf("%d",&a);
	for(x=1;x<=a;x++)
	{
		fact=fact*x;
	}
	printf("%d",fact);
return 0;
}
