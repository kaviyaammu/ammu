#include <stdio.h>

int main(void) {
	int flag=0,i;
	char m[50];
	scanf("%[^\n]s",m);
	for(i=0;m[i]!='\0';i++)
		{
			if(m[i]=='.')
			{
		flag++;
	}
			
		}
	printf("%d",flag);
	return 0;
}
