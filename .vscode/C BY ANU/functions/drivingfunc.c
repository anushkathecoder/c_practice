#include<stdio.h>

int eligibleDriving( int age);

int main(){
    int age;
    printf("enter age");
    scanf("%d",&age);
    printf("%d\n",eligibleDriving(  age));
    return 0;

}
int eligibleDriving( int age){
    if(age>=18){
        printf("candaidate is eligible for driving\n");
    }
    else{
        printf("candidate is not eligible for driving\n");
    }
}