include <stdio.h>

int main(void) 
{
	char t[50];
	int i,flag=0,count=0;
	gets(t);
	for(i=0;t[i]!='\0';i++)
	{
		if((t[i]>='0')&&(t[i]<='9'))
		{
			flag++;
		}
		if((t[i]>='a')&&(t[i]<='z'))
		{
			count++;
		}
	}
		if((flag>=1)&&(count>=1))
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	return 0;
}
