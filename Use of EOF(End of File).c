#include <stdio.h>
int main()
{
  FILE *fptr;
  fptr = fopen("text.txt", "r");
  char ch;
  while (ch != EOF)
  {
    printf("%c",ch);
    ch = fgetc(fptr);
  }
  fclose(fptr);
  return 0;
}
