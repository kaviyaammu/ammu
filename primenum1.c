#include <stdio.h>

int main(void) 
{
	int b,a,i,j,count=0;
	scanf("%d%d",&b,&a);
	for(i=b;i<a;i++)
	{
	for(j=1;j<a;j++)
	{
		if(i%j==0)
		{
			count ++;
		}
		if(count==2)
		{
			printf("%d",i);
		}
		else
		{
	
	}
		
	}	
	}
	return 0;
}
