#include<stdio.h>
int main(){
	int a=8;
	int b=6;
	int temp;
	printf("\n Before Swapping : ");
	printf("\n The value of a is %d ",a);
	printf("\n The value of b is %d ",b);
	temp=a;
	a=b;
	b= temp;
	printf("\n After Swapping : ");
	printf("\n The value of a is %d ",a);
	printf("\n The value of b is %d ",b);
	return 0;
}
