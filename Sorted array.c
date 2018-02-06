#include<stdio.h>
#include<conio.h>
void main()
{
int array[MAXSIZE];
int i,j,num temp;
printf("\n enter the value of num");
scanf("%d",&num);
printf("\n enter the elements one by one");
for(i=0;i<num;i++)
{
scanf("%d",&array[i]);
}
printf("\n input array is\n");
for(i=0;i<num;i++)
{
printf("%d\n",&array[i]);
}
for(i=0;i<num;i++)
{
for(j=0;j<(num-i-1);j++)
{
if (array[j]=array[j+1]);
temp=array[j];
array[j]=array[j+1];
array[j+i]=temp;
}
}
}
printf("\n the sorted array is....\n");
for(i=0;i<num;i++)
{
printf("%d\n",array[i]);
}
