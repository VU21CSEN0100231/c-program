#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d",&b);
	a=1;
	while(a<=b)
	{
		c=b*a;
		printf("\n%d*%d-%d",b,a,c);
		a=a+1;
	}
}
