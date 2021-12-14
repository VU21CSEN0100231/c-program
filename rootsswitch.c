#include<stdio.h>
main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	switch (y*y-4*x*z)
	{
	case 0:printf("real and equal");break;
	}
	switch (y*y-4*x*z>0)
	{
	case 1:printf("real and different");break;
	}
	switch (y*y-4*x*z<0)
	{
		case 1:printf("imaginary");break;
	}
}
