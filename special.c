#include <stdio.h>

int main(void) {
	char t[50];
	int j,flag=0;
	gets(t);
	for(j=0;t[j]!='\0';j++)
	{
		if((t[j]>='!')&&(t[j]<='@'))
		{
			flag++;
		}
	}
	printf("%d",flag);
	return 0;
}
