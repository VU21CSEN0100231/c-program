#include<stdio.h>
main()
{
	int n,s=0,f=1,r,m,i;
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
	r=n%10;
	f=1;
	for(i=1;i<=r;i++)
	{
	f=f*i;
	}
	s=s+f;
	n=n/10;
	}
	if(s==m)
	printf("a number is a strong number");
	else
	printf("a number is not a strong number");
}
