#include<stdio.h>
int main(){
  FILE *fptr;
  fptr = fopen("text.txt", "w");
  fprintf(fptr, "%c", 'p');
  printf("Writing done!");
  fclose(fptr);
  return 0;
}
