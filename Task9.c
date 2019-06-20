#include<stdio.h>
main()
{
	int n,i,p=1;
	printf("Enter number:- \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		p=p*i;
	}
	printf("Factorial of %d is:-  %d \n" ,n,p);

}

