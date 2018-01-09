#include<stdio.h>
int main(void)
{
int a,i,n,r=0;
scanf("%d",&n);
for(i=n;i>0; )
{
a=n%10;
r=r*10+a;
n/10;
}
if(n=r)
{
printf("yes");
}
	else
	{
printf("no");
}
return 0;
}
