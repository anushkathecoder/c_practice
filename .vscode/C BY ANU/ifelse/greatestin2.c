#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("enter a number");
    scanf("%d",&a);
    printf("enter a number");
    scanf("%d",&b);
    if(a>b)
    {
        printf("a is greatest");
    }
    else
    {
        printf(" b is greatest");
    }
    getch();
}   