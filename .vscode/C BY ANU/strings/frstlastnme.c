#include<stdio.h>
#include<string.h>

void printString (char arr[]);

int main(){
    char firstName[]="Anushka";
    char lastName[]="Srivastava";

    printString(firstName);
    printString(lastName);
    return 0;
}
void printString(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}