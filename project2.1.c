#include<stdio.h>
main()
{
	int v;
	printf("my name is soya parth \n");
	printf("i am study for full stack development in amreli\n");
	printf("this program is check the even and odd number using ternary operator\n");
	printf("enter the number\n");
	scanf("%d",&v);
	printf("number is %d\n",v);
	
	(v%2==0)?printf("%d is even number\n",v)
	:printf("odd number\n");
	printf("...the end...");
	
}