#include<stdio.h>
int main()
{
    int t,k,m,l=0,a=0;
    scanf("%d%d",&t,&k);
    m=t+k;
    while(m!=0)
    {
        l=m%10;
        a=a*10+l;
        m=m/10;
        
    }
    if(a==(t+k))
    {
    printf("yes");
    }
    else
    {
    printf("no");
}
return 0;
}
