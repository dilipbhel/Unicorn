#include<stdio.h>
void main()
{
    int a,b=0,c;
    printf(" Enter the interger");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        c=(c*10)+b;
        a=a/10;
    }
    a=c;
    while(a!=0)
    {
        b=a%10;
        printf("%d",b);
        a=a/10;
    }
    return 0;
}
