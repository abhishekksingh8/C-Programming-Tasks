#include<stdio.h>
main()
{
	int n,i,s;
	printf("Enter number for tables \n");
	scanf("%d" ,&n);
	printf("The tables for %d are:- \n" ,n);
	for(i=1;i<=10;i++)
	{
		s=n*i;
		printf("%d*%d=%d\n" ,n,i,s);
		
	}
}
