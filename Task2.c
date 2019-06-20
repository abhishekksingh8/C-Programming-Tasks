#include<stdio.h>
main()
{
	float f=0,c;
	printf("Enter the temperature in Celsius:- \n");
	scanf("%f", &c);
	f=((c*9)/5)+32;
	printf("The temperature in Celsius is:-   %f\n" ,c);
	printf("The temperature in Fahrenheit is:-   %f\n" ,f);
	
}
