#include<stdio.h>
main()
{
	int n,num,i,r,s;
	printf("Enter a number:- \n");
	scanf("%d" ,&n);
	num=n;
	while(n>0) 
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	
	printf("The orignal number is:- %d\n" ,num);
	printf("The reversed number is:- %d\n" ,s);
}

