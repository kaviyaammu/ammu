#include <stdio.h>

int main(void) {
	int t,k,a,b;
	scanf("%d%d%d",&t,&a,&b);
	switch (t)
	{
		case 1:
		{
			k=a/b;
			printf("%d",k);
			break;
			}
				case 2:
		{
			k=a%b;
			printf("%d",k);
			break;
		}
	
	}
	return 0;
}
