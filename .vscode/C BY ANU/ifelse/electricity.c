#include<stdio.h>
#include<conio.h>
void main()
{
    int u,b;
    printf("enter units consumed ");
    scanf("%d",&u);
    if(u>200 && u<=500 )
    {
        printf("u=%d", b=u*3.50);

    }
    else if(u>100 && u<=200)
    {
        printf("u= %d",b=u*2.50);
    }
    else if (u<=100){
          printf("u=%d",b=u*1.50);
    }
    else{
        printf("wrong units entered");
    }
    getch();
}   