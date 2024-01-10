#include<stdio.h>

int eligibleVoting(int age);

int main(){
    int age;
    printf("enter age");
    scanf("%d",&age);
    printf("%d\n",eligibleVoting(age));
    return 0;

}
int eligibleVoting(int age){
    if(age>=18){
        printf("eligible for voting\n");
    }
    else{
        printf("not eligible for voting\n");
    }
}