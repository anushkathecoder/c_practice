#include<stdio.h>
#include<string.h>

int countLength(char arr[]);

int main(){
    char name[100];
    gets(name);
    printf("length is : %d",countLength(name));
    return 0;

}
int countLength(char arr[]){
    int count =0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}