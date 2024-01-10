#include<stdio.h>
#include<conio.h>
void main()
{
    char grade;
    printf("enter grade");
    scanf("%c",&grade);
    switch(grade)
    {
        case 'A':
        printf("average");
        break;
        case 'E':
        printf("excellent");
        break;
        case 'V':
        printf("very good");
        break;
        case 'G':
        printf("good");
        break;
        case 'F':
        printf("fail");
        break;
        default:
        printf("you have entered wrong grade");
        break;
    }
    getch();
}