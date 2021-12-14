#include<stdio.h>
main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	switch (x>y)
	{
    case 0:printf("x is not greater than y");break;
    case 1:printf("x is greater than y");break;
    default:printf("not valid");
	}
}
