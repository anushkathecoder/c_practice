#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter a number");
    scanf("%d",&a);
    printf("enter a number");
    scanf("%d",&b);
    printf("enter a number");
    scanf("%d",&c);
    if(a>b>c)
    {
        printf("a is greatest");
    }
    else if(b>c>a)
    {
        printf(" b is greatest");
    }
    else
    {
        printf("c is greatest");
    }
    getch();
}   