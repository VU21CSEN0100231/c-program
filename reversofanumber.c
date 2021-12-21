#include<stdio.h>
main()
{
	int e,f,g=0;
	scanf("%d",&e);
	while(e>0)
	{
	f=e%10;
	g=(g*10)+f;
	e=e/10;
	}
	printf("%d",g);
}
