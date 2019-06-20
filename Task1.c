#include<stdio.h>
main()
{
	char name;
	int age;
	double phno;
	printf("Enter name:- \n");
	scanf("%c",&name);
	fflush(stdin);
	printf("Enter age:- \n");
	scanf("%d",&age);
	fflush(stdin);
	printf("Enter phone number:- \n");
	scanf("%d",&phno);
	fflush(stdin);
	printf("Details are as follows:- \n");
	printf("Name \tAge \tPhone number\n");
	printf("%c \t",name);	
	printf("%d \t",age);
	printf("%d",phno);
	
	
}
