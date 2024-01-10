#include<stdio.h>

struct complex{
    int real;
    int img;
};

int main(){
    struct complex no.1={5,18};
    struct complex *ptr= & complex no.1;
    printf("real part= %d",ptr->real);
    printf("img part=%d", ptr->img);
    return 0;
}