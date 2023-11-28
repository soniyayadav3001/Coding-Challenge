#include<stdio.h>
int main(){
  FILE *fptr;
  fptr = fopen("text.txt", "r");
  printf("%c\n", fgetc(fptr));
  fclose(fptr);
  return 0;
}
