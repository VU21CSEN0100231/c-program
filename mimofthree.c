#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	switch (a<b&&a<c)
	{
	case 1:printf("a is minimum");break; 
	}
	switch (b<a&&b<c)
	{
	case 1:printf("b is minimum");break; 
	}
	switch (c<a&&c<b)
	{
	case 1:printf("c is minimum");break; 
	}
	
}
