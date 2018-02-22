#include<stdio.h>

int main() {
  char t[20];
  int i;
  scanf("%s",&t);
  for(i=0;t[i]!='\0';i++)
{
    if(i%2!=0)
    printf("%c\t",t[i]);
}
printf("\n");
  for(i=0;t[i]!='\0';i++)
  {
  if(i%2==0)
    printf("%c\t",t[i]);
}
return 0;
}
