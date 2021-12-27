#include<stdio.h>
main()
{
	int n,r,count=0;
	printf("enter the value of n");
	scanf("%d",&n);
	while(n>0)
	{
	r=n%10;
	count=count+1;
	n=n/10;
	}
	printf("%d",count);
}
