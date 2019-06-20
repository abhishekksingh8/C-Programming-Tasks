#include<stdio.h>
main()
{
	float sub1,sub2,sub3,sum=0,avg=0;
	printf("Enter the marks in Subject 1:- \n");
	scanf("%f", &sub1);
	printf("Enter the marks in Subject 2:- \n");
	scanf("%f", &sub2);
	printf("Enter the marks in Subject 3:- \n");
	scanf("%f", &sub3);
	sum=sub1+sub2+sub3;
	avg=sum/3;
	printf("The sum of 3 subjects is:-   %f\n" ,sum);
	printf("The average of 3 subjects is:-   %f\n" ,avg);
	
}
