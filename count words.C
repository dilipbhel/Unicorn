#include<stdio.h>

void main()
{
	char a[250];
	gets(a);
	int count=0,i;
	for(i=0;a[i]!=0;i++)
	{
		 if(a[i]!=' ')
		 count++;
	}
	printf("%d",count);
	getch)();
	
}
