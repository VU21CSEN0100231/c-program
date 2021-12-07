#include<stdio.h>
main()
{
	int x;
	scanf("%d",&x);
	if(x<0)
	{
		printf("freezing weather");
	}
	else if (x<10)
	{
		printf("very cold weather");
	}
	else if (x<20)
	{
		printf("cold weather");
	}
	else if(x<30)
	{
		printf("normal weather");
	}
	else if (x<40)
	{
		printf("hot");
	}
	else
	{
		printf("very hot");
	}
}
