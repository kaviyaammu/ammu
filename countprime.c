#include <stdio.h>

int main(void) 
{
	int m1,m2,x,y,count;
	scanf("%d%d",&m1,&m2);
	for(x=m1;x<m2;x++)
	{
		count=0;
	for(y=1;y<m2;y++)
	{
		if(x%y==0)
		{
			count ++;
		}
	}
	}
			printf("%d\t",count);
	

	return 0;
}
