#include<stdio.h>
#include<conio.h>
void main()
{
    int m,p,c;
    printf("enter m");
    scanf("%d",&m);
    printf("enter p");
    scanf("%d",&p);
    printf("enter c");
    scanf("%d",&c);
    if(m>=65 && p>=55 && c>=50 && (m+p+c)>=180)
    {
        printf("candiadate is eligible for admission");
    }
    else if (m+p>=140)
    {
        printf("candidate is eligible for admission");
    }
    else
    {
        printf("candidate is not eligible for admission");
    }
    getch();
}   