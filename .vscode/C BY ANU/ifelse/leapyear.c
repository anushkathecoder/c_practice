#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("enter a ");
    scanf("%d",&a);
    if(a%4==0)
    {
        printf("a is leap year");
    }
    else
    {
        printf(" a is not leap year");
    }
    getch();
}   