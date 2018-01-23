#include <stdio.h>

int main(void) {
int t,k,l;
scanf("%d%d",&t,&k);
l=t-k;
if(l%2==0)
printf("%d is even number",l);
else
printf("%d is odd number",l);
	return 0;
}
