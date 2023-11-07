#include<stdio.h>
int main(){
int i , space , k,j;
for(i = 1; i<10;i++){
	for(space=1;space<=10-i;space++){
		printf(" ");
	}
	for(j =1;j<=i;j++){
		printf(" *");
	}
	printf("\n");
}	
return 0;
}
