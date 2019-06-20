#include<stdio.h>
main()
{
	int n;
	float f,c;
	printf("Enter 1 to convert temperature in Celsius to Fahrenheit \nEnter 2 to convert temperature in Fahrenheit to Celsius \n");
	scanf("%d",&n);
	
	switch(n)
	{				
		case 1:
		printf("Enter the temperature in Celsius:- \n");
		scanf("%f", &c);
		f=((c*9)/5)+32;
		printf("The temperature in Celsius is:-   %f\n" ,c);
		printf("The temperature in Fahrenheit is:-   %f\n" ,f);
		break;
	
		case 2:
		printf("Enter the temperature in Fahrenheit:- \n");
		scanf("%f", &f);
		c=((f-32)/9)*5;
		printf("The temperature in Fahrenheit is:-   %f\n" ,f);
		printf("The temperature in Celsius is:-   %f\n" ,c);
		break;
	
		default:
		printf("Wrong choice!\nExit");
	}
	
}

