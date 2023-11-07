#include<stdio.h>
int main(){
// if else ladder....
int marks ;
printf("Enter your marks : ");
scanf("%d",&marks);
if(marks>=80){
	printf("Grade A");
}	
else if((marks>=70)&&(marks<80)){
	printf("Grade B");
}
else if((marks>=60)&&(marks<70)){
	printf("Grade C");
}
else{
	printf("Grade D");
}
return 0;

}
