#include<stdio.h>
 

void printTable(int n);

int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);

    printTable(n);  //argument
    return 0;
}
void printTable(int n){   //parameter
    int i;
    for(i=1;i<=10;i++) {
        printf("%d\n",i*n);
    }
}