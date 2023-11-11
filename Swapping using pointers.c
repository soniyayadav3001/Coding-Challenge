//swap the values of two variables using pointers
#include<stdio.h>
void swap(int* a , int* b ){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
int x = 5;
int y = 10;
swap(x,y);
printf("Value of x : %d\n",x);
printf("Value of y : %d\n",y);
	return 0;
}
