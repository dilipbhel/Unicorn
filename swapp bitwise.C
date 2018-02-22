#include<stdio.h>
void main()
{
int x,y;
printf(" enter the numbers");
scanf("%d %d",&x,&y);
(x^=y),(y^=x),(x^=y);
printf(" after swapping %d %d",x,y);
getch();
}
