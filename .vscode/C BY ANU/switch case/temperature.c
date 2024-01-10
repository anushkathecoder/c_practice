#include<stdio.h>
#include<conio.h>
void main()
{
    int t;
    printf("enter temperature");
    scanf("%d",&t);
    switch(t)
    {
        case(t<o):
        printf("freezing weather");
        break;
        case ( t<10):
        printf("very cold weather");
        break;
        case (20<t>=10):
        printf("cold weather");
        break;
        case (30<t>=20):
        printf("normal in temp");
        break;
        case (40<t>=30):
        printf("its hot");
        break;
        case 6:
        (t>=40);
        printf("its very hot");
        break;
    }
    getch();
}