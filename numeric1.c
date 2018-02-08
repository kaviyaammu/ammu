#include <stdio.h>

int main(void) {
	char b[50];
	int i,count=0;
	gets(b);
	for(i=0;b[i]!='\0';i++)
	{
		if((b[i]>='0')&&(b[i]<='9'))
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
