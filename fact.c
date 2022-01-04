#include<stdio.h>
main()
{
	int x,y,z;
	scanf("%d",&x);
    y=1;
    while(y<=x)
    {
    z=z*y;
    y=y+1;
	}
	printf("%d",z);
}
