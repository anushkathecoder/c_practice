#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,sum;
    printf("enter n");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum=%d\n",sum);
    getch();
} 