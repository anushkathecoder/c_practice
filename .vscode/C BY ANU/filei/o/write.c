#include<stdio.h>
int main(){
FILE *fptr;
fptr=fopen("test.txt","w");

fprintf(fptr,"%c",'o');
fprintf(fptr,"%c",'r');
fprintf(fptr,"%c",'a');
fprintf(fptr,"%c",'n');
fprintf(fptr,"%c",'g');
fprintf(fptr,"%c",'e');
fprintf(fptr,"%c",'s');

fclose(fptr);
return 0;
}