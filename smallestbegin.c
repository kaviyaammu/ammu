#include<stdio.h>

int main() {
   int t[50],k,l,i,j,plus=0;
   scanf("%d%d",&k,&l);
   for(i=0;i<k;i++)
   {
       scanf("%d",&t[i]);
   }
   for(i=0;i<k;i++)
   {
   	for(j=i+1;j<k;j++)
   	{
       if(t[i]>t[j])
       {
       plus=t[i];
       t[i]=t[j];
       t[j]=plus;
       }
   	}
   }
   printf("%d",t[l-1]);
      
return 0;
}

