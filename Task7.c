#include<stdio.h>
#include<string.h>
main()
{ 
  char a[100], b[100];
  printf("Enter a string to check if it is a Palindrome:-\n");
  gets(a);
 
  strcpy(b, a);  
  strrev(b);  
   
  if (strcasecmp(a, b) == 0) 
    printf("The string is a Palindrome.\n");
  else
    printf("The string isn't a Palindrome.\n");
 
}

