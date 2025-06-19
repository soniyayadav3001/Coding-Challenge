#include<stdio.h>
int addition(int a , int b ){ //paramertized function
	int c = a+b;
	return c ; //return is a reserved keyword
} 
int main(){
int result;
result = addition(14,5);
printf("Addition is : %d",result);
}
