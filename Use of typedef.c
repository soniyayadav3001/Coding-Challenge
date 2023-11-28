#include<stdio.h>
#include<string.h>
typedef struct computersciencestudent{
  int roll;
  float cgpa;
  char name[100];
}cse;
int main(){
  cse s1;
  s1.roll = 1664;
  s1.cgpa = 9.4;
  strcpy(s1.name, "Joey");
  printf("Student's name is %s\n", s1.name);
  printf("Student's roll no. is %d\n", s1.roll);
  printf("Student's cgpa is %f\n", s1.cgpa);
  return 0;
}
