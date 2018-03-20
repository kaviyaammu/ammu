#include<stdio.h>
#include<math.h>
int main()
{
    int t,k,m,flat;
    scanf("%d%d",&t,&k);
    for(m=1;m<k;m++)
    if(pow(k,m)==t)
    flat++;
    if(flat>0)
    printf("Yes");
    else
    printf("No");
    return 0;
    
}
