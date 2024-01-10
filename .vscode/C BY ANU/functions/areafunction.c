#include<stdio.h>


float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float a,float b);

int main(){
    float a=8.8;
    float b=5.6;
    printf("area is:%f\n",rectangleArea(  a,b));//only one work will be done by a single function
    return 0;

    float side=6.0;
    printf("area is:%f\n",squareArea(side));
    return 0;

    float radius=8.32;
    printf("area is:%f\n",circleArea(radius));
    return 0;


}
float squareArea(float side){
    return side*side;
}
float circleArea(float radius){
    return 3.14* radius *radius;
}
float rectangleArea(float a,float b){
    return a*b;
}