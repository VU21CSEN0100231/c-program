#include<stdio.h>
main()
{
	int n,k,a;
	scanf("%d",&n);
    k=1;
    while(k<=n)
    {
    	a=a*k;
    	k=k+1;
	}
	printf("%d",a);
}
