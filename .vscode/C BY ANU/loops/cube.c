#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("enter n:");
    scanf("%d",&n);
    for(i=n;i<=3;i++);
    {
        printf("%d\n",n*n*n);
    }
    getch();
}