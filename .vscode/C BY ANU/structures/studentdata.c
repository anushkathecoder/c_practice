#include<stdio.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1;
    s1.roll=1664;
    s1.cgpa=9.2;
    strcpy(s1.name,"shradha");
    
    printf("studentname=%s\n",s1.name);
    printf("studentroll=%d\n",s1.roll);
    printf("studentcgpa=%f\n",s1.cgpa);
    
    return 0;
}