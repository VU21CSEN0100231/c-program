#include<stdio.h>
main()
{
	int a=1,b=1,c=0,n,i;
	printf("enter the number");
	scanf("%d",&n);
	printf("%d\t%d\t",a,b);
	for(i=1;i<=(n-2);i++)
	{
	c=a+b;
	printf("%d\t",c);
	a=b;
	b=c;
	}
	return 0;
}
