#include <stdio.h>

int main(void) {
	int a[10],i,j,fav;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				fav=a[i];
				a[i]=a[j];
				a[j]=fav;
			}
		}
	}
	printf("%d",a[9]);
	return 0;
}
