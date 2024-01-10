#include<stdio.h>


void calculatePrice(float value);

int main(){
    float value=124.0;
    calculatePrice(value);//calling function
    return 0;
}



void calculatePrice(float value){//definition
    value=value+(0.18*value);
    printf("final price is:%f\n",value);
}