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
    if(c>b>a)
    {
        printf("a is smallest");
    }
    else if(c>a>b)
    {
        printf(" b is smallest");
    }
    else
    {
        printf("c is smallest");
    }
    getch();
} 