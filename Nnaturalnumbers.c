#include<stdio.h>
main()
{
	int n;
	int i=1,s=0;
	scanf("%d",&n);
	while(i<n)
	{
	//printf("%d\n",i);
	s=s+i;
	i++;
	}
	printf("%d",s);
}
