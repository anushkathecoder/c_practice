#include<stdio.h>
#include<conio.h>
void main()
{
    int male,female;
    printf("enter age of male ");
    scanf("%d",&male);
    printf("enter age of female");
    scanf("%d",&female);
    if(male>=21)
    {
        printf("  male is eligible for driving license");
    }
    else
    {
        printf(" male is not eligible");
    }
    if(female>=18)
    {
        printf(" female is eligible");
    }
    else
    {
        printf(" female is not eligible");
    }
    getch();
}   