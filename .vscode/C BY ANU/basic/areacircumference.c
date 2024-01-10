#include<stdio.h>
#include<conio.h>
void main()
{
    int r,a,c;
    printf("enter radius");
    scanf("%d",&r);
    //a=area of circle
    a=3.14*r*r;
    printf("a=%d",a);
    //c=circumference of crcle
    c=2*3.14*r  ;
    printf("c=%d",c);
    getch();
}