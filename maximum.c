#include <stdio.h>

int main(void) {
	int o,i,j,t,a[10];
	scanf("%d",&o);
	for(i=1;i<=o;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=o;i++)
	{
		for(j=i+1;j<=o;j++)
		{
			if(a[i]>a[j])
			{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			}
	}
	}
	printf("%d",a[o]);
	return 0;
}
