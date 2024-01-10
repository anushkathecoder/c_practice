#include<stdio.h>
#include<string.h>
int main(){

    char *canchange="hello kanpur";
    puts(canchange);
    canchange="hello kanpur people";
    puts(canchange);

    char cannotchange="hello kanpur";
    puts(cannotchange);
    cannotchange="hello kanpur people";
    puts(cannotchange);

    return 0;
}