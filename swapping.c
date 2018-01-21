#include<stdio.h>
int main()
{
	int a,b,temp;
	scanf("%d%d",&a,&b);
	temp=b;
	b=a;
	a=temp;
	printf("the swapping of number is %d and %d",a,b);
	return 0;
}
