#include<stdio.h>
void main()
{
     char str1[20],str2[20];
     int i=0;
     int j=0;
     printf("\n Enter the strings");
     gets(str1);
     gets(str2);
     while(str1[i]!='\0')
     {
         i++;
     }
     while(str2[j]!='\0')
     {
         str1[i]=str2[j];
         j++;
         i++;
     }
     str1[i]!='\0';
     printf("\n %s",str1);
    
     
 }
