#include<stdio.h>
int main(){
    int n;
    do{
        printf("enter number");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n%2!=0){//print n till its a divisible of 2
            break;
        }
    }
       while(1);//1 refers to true 0 refers to false
        printf("thankyou");
    return 0;
    
}