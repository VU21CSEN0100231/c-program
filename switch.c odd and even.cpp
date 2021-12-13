#include<stdio.h>
main()
{
	int v;
	scanf("%d",&v);
	switch(v%2)
	{
    case 0:printf("even");break;
	case 1:printf("odd");break;
	default:printf("not even or odd");	
	}
}
