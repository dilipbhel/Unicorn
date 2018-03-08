#include<stdio.h>
void main()
{
    int n[50],a,b,i;
    printf(" Enter the size of array");
    scanf("%d",&b);
    printf(" The elements are");
    for(a=0;a<b;a++)
    {
    scanf("%d",&n[a]);
    }
    int max=n[0];
    int min=n[0];
    for(a=0;a<b;a++)
    {
        if(n[i]>max)
        
        max=a[i];
        }
        {
            if(n[i]<min)
            
                min=a[i];
        }
        printf("\n %d",min);
        printf("\n %d",max);
    }
    
