#include<stdio.h>

void main() {
  char c[50]="the word is apple";int i,count=0;
  for(i=0;i<30;i++)

    {
        if(c[i]==' ')
      count++;
    }
        if(count!=0)
       printf("%d spaces",count);

}
