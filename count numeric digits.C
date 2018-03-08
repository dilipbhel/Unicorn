#include<stdio.h>
void main()
{
   char n[30];
   int i,a,count=0;
   printf(" Enter the value");
   scanf("%s",n);
   for(i=0;n[i]!='\0';i++)
   {
       if(n[i]>='0' && n[i]<='9');
       {
           count=count+1;
          }
          
   }
   printf(" \n %d",count);
   return(0);
}
