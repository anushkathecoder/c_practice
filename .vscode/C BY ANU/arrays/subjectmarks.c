#include<stdio.h>

int main(){
    int marks[3];
    printf("enter phy:");
    scanf("%d",&marks[0]);
    printf("enter chem:");
    scanf("%d",&marks[1]);
    printf("enter maths:");
    scanf("%d",&marks[3]);
    //marks stored in array 
    printf("phy=%d,chem=%d,maths=%d",marks[0],marks[1],marks[3]);
    return 0;
}
