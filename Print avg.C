#include<stdio.h>
void main()
{
    int a,b,array[50],sum=0,avg;
    printf(" Enter the size of array element");
    scanf("%d",b);
    printf("\n Enter the array elements");
    for(a=0;a<b;a++)
    {
        scanf("%s",array[a]);
        }
        for(a=0;a<b;a++)
        {
            sum=sum+array[a];
        }
        avg=sum/b;
        printf("\n %d",sum);
        printf("\n %d",avg);
        return 0;
    
}
