#include<stdio.h>
#include<conio.h>
void main()
{
  int Number, i, Sum = 0;
  
  printf("\nPlease Enter any Integer Value\n");
  scanf("%d", &Number);
  
  for(i = 1; i <= Number; i++)
  {
     Sum = Sum + i;
  }
  
  printf("Sum of Natural Numbers = %d", Sum);
  getch();
}
