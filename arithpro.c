#include<stdio.h>
int main()
{
    int a,d,m=0,n;
    scanf("%d%d%d",&a,&d,&n);
    m=(n/2)*(2*a+(n-1)*d);
    printf("%d",m);
    return 0;
}
