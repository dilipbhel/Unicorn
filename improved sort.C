#include<stdio.h>
void main()
{
int arr[100],b,l,size,temp,largest;
printf("\n enter the size of the array:");
scanf("%d",&size);
for(b=0;b<size;b++)
{
scanf("%d",&b[b]);
}
largest=b[0];
for(b=0;b<size;b++)
{
if(largest<b[b])
{
largest=b[b];
}
}
printf("\n%d",largest);
getch();
}
