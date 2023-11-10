#include<stdio.h>
int main(){
	int number = 100;
	int*p;
	int**pp;
	int***ppp;
	int****pppp;
	p=&number;
	printf("Address of number : %d",p);
	printf("\nValue of number : %d",*p);
	
	pp=&p;
	printf("\nAddress of p : %d",pp);
	printf("\nValue of p : %d",*pp);
	printf("\nValue of number : %d",*p);
	
	ppp=&pp;
	printf("\nAddress of pp : %d",ppp);
	printf("\nValue of pp : %d",**ppp);
	printf("\nValue of p : %d",**pp);
	
	pppp=&ppp;
	printf("\nAddress of ppp : %d",pppp);
	printf("\nValue of ppp : %d",**pppp);
	printf("\nValue of pp : %d",**ppp);
  return 0;
}
