#include<stdio.h>

struct student{
     int roll;
     float cgpa;
     char name[100];
};

int main(){
    struct student s1;
    s1.roll=204;
    s1.cgpa=9.2;
    strcpy(s1.name,"anushka");
    printf("studentname=%s\n",s1.name);
    printf("studentroll=%d\n",s1.roll);
    printf("studentcgpa=%f\n",s1.cgpa);

    struct student s2;
    s2.roll=209;
    s2.cgpa=9.5;
    strcpy(s2.name,"ankita");
    printf("studentname=%s\n",s2.name);
    printf("studentroll=%d\n",s2.roll);
    printf("studentcgpa=%f\n",s2.cgpa);
    
    struct student s3;
    s3.roll=264;
    s3.cgpa=8.2;
    strcpy(s3.name,"divyanshi");
    printf("studentname=%s\n",s3.name);
    printf("studentroll=%d\n",s3.roll);
    printf("studentcgpa=%f\n",s3.cgpa);
    
    return 0;
}
    