#include <stdio.h>

int main(void) {
	char t[30];
	int k,i;
	gets(t);
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("%c",t[i]);
	}
	return 0;
}
