#include<stdio.h>

typedef struct bankaccount{
    int accountno;
    char name[100];
}acc;
 int main(){
    acc acc1={123,"anushka"};
    printf("acc no=%d\n",acc1.accountno);
    printf("acc name = %s\n",acc1.name);
    return 0;
 }