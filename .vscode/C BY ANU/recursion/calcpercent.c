#include<stdio.h>

int calcPercentage(int science, int maths, int english);

int main(){
    
    int sc=98;
    int maths =76;
    int english=99;
    printf(" Percentage is : %d\n",calcPercentage(sc,maths,english));

}
int calcPercentage(int science, int maths,  int english){
return((science+maths+english)/3);
}