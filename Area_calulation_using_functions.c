#include<stdio.h>
void Area_circle(int r){
	double ar1 = 3.14*r*r;
	printf("Area of circle is : %Lf\n",ar1);
}
void Area_Rectangle(int l , int w){
	int ar2 = l*w;
	printf("Area of rectangle is : %d\n",ar2);
}
int main(){
Area_circle(25);
Area_Rectangle(15,5);	
return 0;
}
