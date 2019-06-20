#include<stdio.h>
main()
{
	int n,min,max,i;
	printf("Enter the number of elements in the array:-\n");
	scanf("%d",&n);
	int a[n-1];
	printf("Enter the elements of the array:-\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	max=a[0];
	min=a[0];
	
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
		
		if(a[i]<min)
		min=a[i];
		
	}
	
	printf("The smallest element in the array is:- %d\nThe largest element in the array is:- %d",min,max);

}
