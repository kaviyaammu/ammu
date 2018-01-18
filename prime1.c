#include <stdio.h>

int main(void) 
{
	int t,k,i,j,count=0;
	scanf("%d%d",&t,&k);
	for(i=t;i<k;i++)
	{
		count=0;
	for(j=1;j<k;j++)
	{
		if(i%j==0)
		count ++;
	}
		if(count==2)
			printf("%d",i);
		
	}
	
	return 0;
}
