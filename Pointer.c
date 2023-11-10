#include<stdio.h>
int main(){
	int number= 10;
	printf("Value of number is  : %d\n",number);
	printf("Address of number is : %d\n",&number);
	
	int* p = &number;
	printf("Address of number is(using pointer) : %d\n",*p);
}
