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
    if(a==c)
    {
        printf("it is a palindrome number");
        //PALINDROME NUMBER IS ANUMBER WHICH REVERSE IS EXACT TO THE ORIGINAL NUMBER
    }
    else{
        printf("it is not ");
    }
    getch();
    }