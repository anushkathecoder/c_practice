#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,sum,average;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    printf("enter c");
    scanf("%d",&c);
    sum=a+b+c;
    printf("sum=%d",sum);
    average=a+b+c/3;
    printf("average=%d",average);
    getch();
}