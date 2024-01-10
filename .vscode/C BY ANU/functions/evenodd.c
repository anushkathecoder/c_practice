#include<stdio.h>

int evenodd(int n);

int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    printf("%d\n", evenodd(n));
    return 0;

}
int evenodd(int n){
    if (n%2==0){
        printf("entered number is even\n");
    }
    else{
        printf("entered number is odd\n");
    }
}