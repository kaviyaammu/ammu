#include <stdio.h>
#include<string.h>
int main(void) {
	char t[20];
	int x,y,z,k;
	scanf("%s%d",&t,&z);
	x=strlen(t);
	y=x-z;
	for(k=y;k<x;k++)
	{
		printf("%c",t[k]);
	}
	return 0;
}
