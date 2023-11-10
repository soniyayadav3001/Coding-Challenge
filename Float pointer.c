#include<stdio.h>
int main(){
	float number = 24.5;
	float* p ;
	p=&number;
	printf("Address of number : %d",p);
	printf("\nValue of number : %f",*p);
}
