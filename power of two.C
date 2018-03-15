#include <stdio.h>

void main() 
{
	int num,a=0,b;
	printf("enter the number");
	scanf("%d",&num);
	b=num;
	while(b!=1)
	{
		if(b%2!=0)
		{
			a=1;
			break;
			
		}
		b=b/2;
	}
	if(a==0)
	{
		printf("\n %d is a power of 2",num);
	}
	else if(a==1)
	{
		printf("\n %d is not a power of 2",num);
	}
	return 0;
}
