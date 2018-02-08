#include<stdio.h>
int main()
{
int b[20],i,num;
printf("Enter the size of an array:\n");
scanf("%d",&num);
printf("Enter the elements in an array:\n");
for(i=0;i<num;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<num;i++)
{
printf("%d %d\n",i,b[i]);
}
getch();
}
