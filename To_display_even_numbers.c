#include<stdio.h>
int main(){
	int count = 0;
	int number = 1;
	int n;
	printf("Enter number of even number you want : ");
	scanf("\n%d",&n);
	while(count<=n){
		if((number%2)==0){
			printf("\n%d",number);
			count++;
		}
		number++;
	}
	return 0;
}
