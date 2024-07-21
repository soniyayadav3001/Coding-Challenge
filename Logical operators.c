#include<stdio.h>
int main(){
	//Logical operators
	int a= 10;
	int b= 20;
	int c=30;
	int d;
	d=((a<b)||(b==c));
	printf("The result of (a<b)||(b==c) : %d",d );//OR operator
	d=((a>b)&&(b==c));
	printf("\n The result of (a>b)&&(b==c) : %d",d );//AND operator
	d=(!(b==c));
	printf("\n The result of !(b==c) : %d",d );//NOT operator	

	return 0;
}
