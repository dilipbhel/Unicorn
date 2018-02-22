#include<stdio.h>
void main()
{
int h,i,j;
printf(" Enter the first number:h");
scanf("%d",&h);
printf(" Enter the secod number:i");
scanf("%d",&i);
j=h;
h=i;
i=j;
printf(" after swapping %d",h);
printf(" after swapping"%d",i);
getch();
}
