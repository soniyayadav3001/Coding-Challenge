#include<stdio.h>
int main(){
int num ;
int originalnum;
int remainder;
int reversedNum = 0;
printf("Enter a number here : ");
scanf("%d",&num);
originalnum = num;
while(num>0)
	{
		remainder = num%10;
		reversedNum = reversedNum*10+remainder;
		num = num /10;
	}
	if(originalnum==reversedNum){
		printf("\n%d is Palindrome",originalnum);
	}
	else{
		printf("\n%d is not Palindrome",originalnum);
	}
	return 0;
}
