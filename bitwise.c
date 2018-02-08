#include<stdio.h>
int main()
{
	int m,l;
	scanf("%d%d",&m,&l);
	printf("%d\t%d\n",m,l);
	m=m^l;
	l=m^l;
	m=m^l;
	printf("%d\t%d\n",m,l);
	return 0;
}
