#include<stdio.h>
int main(){
	int age;
	printf("Enter your age here : ");
	scanf("%d",&age);
	age>=18?printf("Elligible to vote"):printf("Not Elligible to vote");
	return 0;
}
