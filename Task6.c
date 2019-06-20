#include<stdio.h>
#include<math.h>
main()
{
	int n,num,i,r,s,c=0,temp=0;
	printf("Enter a number:- \n");
	scanf("%d" ,&n);
	num=temp=n;
	
	while(n>0)
	{
		c=c+1;
		n=n/10;
	}

	while(temp>0) 
	{
		r=temp%10;
		s=s+(int)(pow(r,c));
		temp=temp/10;
	}
    
	if(num==s)
	printf("The number %d is an Armstrong number \n" ,num);
	else
	printf("The number %d is NOT an Armstrong number \n" ,num);
	
}
		

