#include<stdio.h>

int main() {
   int t[50],k,l,i,plus=0;
   scanf("%d%d",&k,&l);
   for(i=0;i<k;i++)
   {
       scanf("%d",&t[i]);
   }
   for(i=0;i<k;i++)
   {
       if(t[i]%2!=0)
       {
       	plus++;
       }
   if(plus==l)
   {
   printf("%d",t[i]);
   }
   } 
return 0;
}

