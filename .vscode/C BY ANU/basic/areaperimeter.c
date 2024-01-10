#include<stdio.h>
#include<conio.h>
void main()
{
    int l,b,m,n,p,q;
    printf("enter length");
    scanf("%d",&l);
    printf("enter breadth");
    scanf("%d",&b);
    //m=area of rectangle
    m=l*b;
    printf("m=%d",m);
    //n=perimeter of rectangle
    n=2*(l+b);
    printf("n=%d",n);
    //p=area of square
    p=l*l;
    printf("p=%d",p);
    //q=perimeter of square
    q=4*l;
    printf("q=%d",q);
    getch();
}