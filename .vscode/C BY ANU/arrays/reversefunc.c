#include<stdio.h>

void reverse(int arr[],int n);
void printArr(int arr[],int n);

int main(){
    int arr[]={6,8,9,5,7};
    reverse(arr,5);
    printArr(arr,5);
    return 0;
}
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("%d\n");
}
void reverse(int arr[],int n){
    for (int i=0;i<n/2;i++){
        int firstVal=arr[i];
        int secondVal=arr[n-i-1];
        arr[i]=secondVal;
        arr[n-i-1]=firstVal;
    }
}