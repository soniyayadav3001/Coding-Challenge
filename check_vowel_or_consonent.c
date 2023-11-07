#include<stdio.h>
int main(){
char ch;
printf("Enter the value of char : ");
scanf("%c",&ch);
if ((ch>='a')||(ch<='z')||(ch>='A')||(ch<='Z')){
	if((ch=='a')||(ch=='A')||(ch=='e')||(ch=='E')||(ch=='i')||(ch=='I')||(ch=='o')||(ch=='O')||(ch=='u')||(ch=='U'))
{
	printf("Char is Vowel");	
}else{
	printf("Char is consonent");
}
}
return 0;
}
