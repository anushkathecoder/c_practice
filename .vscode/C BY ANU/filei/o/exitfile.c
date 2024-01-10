#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("newtest.txt","r");
    if(fptr==null){
        printf("file does'nt exists\n");
    }else{
        fclose(fptr);
    }
}