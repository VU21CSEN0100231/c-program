#include<stdio.h>
main()
{
	int a=20;
	float f=5.789;
	char c='v';
	int *p;
	float *h;
	char *u;
	p=&a;
	h=&f;
	u=&c;
	printf("\n%p",p);
	printf("\n%p",h);
	printf("\n%p",u);
	printf("\n%d",*p);
	printf("\n%d",*h);
	printf("\n%d",*u);
}
