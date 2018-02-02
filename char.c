#include <stdio.h>

int main(void) {
	int temp=0,i;
	char t[50];
	scanf("%[^\n]s",t);
	for(i=0;t[i]!='\0';i++)
		{
		temp++;
	}
	printf("%d",temp);
	return 0;
}
