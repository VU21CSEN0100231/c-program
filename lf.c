#include<stdio.h>
main()
{
	int a=40;
	float f=5.666;
	char c='t';
	double d=24.04531;
	int *p;
	float *h;
	char *v;
	double *b;
	p=&a;
	h=&f;
	v=&c;
	b=&d;
	printf("\n%p",p);
	printf("\n%p",h);
	printf("\n%p",v);
	printf("\n%p",b);
	printf("\n%d",*p);
	printf("\n%f",*h);
	printf("\n%c",*v);
	printf("\n%lf",*b);
}
