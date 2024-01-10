#include<stdio.h>
#include<conio.h>
void main()
{
    int cp,sp,profit,loss,pp,lp;
    printf("enter cost price");
    scanf("%d",&cp);
    printf("enter selling price");
    scanf("%d",&sp);
    if (sp>cp)
    {
        printf(" profit=%d",sp-cp);
        printf("pp=%d",sp-cp/cp*100);
    }
    else if(cp>sp)
    {
        printf("loss=%d",cp-sp);
        printf("lp=%d",cp-sp/cp*100);
    }
    else
    {
        printf("no profit no loss");
    }
    getch();
}