    #include<stdio.h>
    int main(void)
    {
    	int j,i,count;
    	scanf("%d",&j);
    	for(i=1;i<=j;i++)
    	{
    		if(j%i==0)
    		{
    		count ++;
    	}
    }
    if(count!=2)
    printf("composite");
    else
    printf("no");
    return 0;
    }
