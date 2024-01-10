#include<stdio.h>
void printhello();//declaration prototype
void printgoodbye();
int main(){
    printhello();//final call
    printgoodbye();
    return 0;
}
//function definiton
void printhello(){
    printf("hello!\n");
}
void printgoodbye(){
    printf("goodbye!\n");
}
