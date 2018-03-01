#include <stdio.h>
void main()
{
	int numbers[20];
  clrscr();
	int n,i,max=numbers[0];
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("\n enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&numbers[i]);
	}
	for(i=0;i<n;i++)
	{
		if(array[i]>max)
		{
			max=numbers[i];
		}
	}
	printf("\nthe maximum of the numbers is:%d",max);
	return 0;
}
