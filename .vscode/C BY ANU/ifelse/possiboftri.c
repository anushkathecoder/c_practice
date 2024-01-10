#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter a ");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    printf("enter c");
    scanf("%d",&c);
    if(a+b>c)
    {
        printf("it is a triangle");
    }
    else
    {
        printf(" it is not triangle");
    }
    getch();
}   