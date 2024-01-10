#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("\n enter a character:");
    scanf("%c",&ch);
    if(ch<='9' && ch>='0')
    {
     printf("\nentered character is a digit");
    }
    else if(ch>='a' && ch<='z')
    {
     printf("\nentered character is a small letter");
    }
    else if(ch<='Z' && ch>='A')
    {
      printf("\nentered character is capital letter");
    }
    else
    {
     printf("\nentered character is specail character");
    }
    getch();
}
