#include<stdio.h>
#include<string.h>
main()
{
	char first[100],last[100];
	printf("Enter the first name:- \n");
	gets(first);
	printf("Enter last name:- \n");
	gets(last);
	strcat(strcat(first," "),last);
	printf("Full name:- %s\n" ,first);
}
