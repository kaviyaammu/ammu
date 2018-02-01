 #include<stdio.h>
    int main(void)
    {
    	int num,i,key;
    	scanf("%d",&num);
    	for(i=1;i<=num;i++)
    	{
    		if(num%i==0)
    		{
    		key ++;
    	}
    }
    if(key!=2)
    printf("composite");
    else
    printf("not");
    return 0;
    }
