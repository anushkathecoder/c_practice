#include<stdio.h>

int main(){
    //2 bachon ke 3 subjects ke marks store krwaynge
    int marks[2][3];
    marks[0][0]=90;
    marks[0][1]=98;
    marks[0][2]=99;

    marks[1][0]=84;
    marks[1][1]=90;
    marks[1][2]=89;

    printf("%d\t",marks[0][0]);
    printf("%d\t",marks[0][1]);
    printf("%d\t\n",marks[0][2]);
    
    printf("%d\t",marks[1][0]);
    printf("%d\t",marks[1][1]);
    printf("%d\t",marks[1][2]);
    return 0;
}