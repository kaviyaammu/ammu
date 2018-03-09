#include<stdio.h>

int main() {
  int t[10],m1,k,i,j;
  scanf("%d",&k);
  for(i=0;i<k;i++)
  {
      scanf("%d",&t[i]);
  }
  for(i=0;i<k;i++)
  {
    for(j=i+1;j<k;j++)
    {
   m1=t[i]|t[j];
    }
  }
   printf("%d",m1);
  return 0;
}
