#include<stdio.h>
#include<string.h>
int main() 
{
    char t[20];
    int k,x=0,y=0;
    scanf("%s",&t);
    for(k=0;t[k]!='\0';k++)
    {
        if((t[k]>='0')&&(t[k]<='9'))
        {
        x++;
        }
        if((t[k]>='a')&&(t[k]<='z'))
        {
            y++;
        }
    }
    if((x>=1)&&(y==0))
    {
    printf("yes");
    }
    else
    {
    printf("no");
    }
    return 0;
  
}
