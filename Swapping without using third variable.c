#include<stdio.h>
int main(){
    int a=5;
    int b=8;
    printf("\n Before Swapping : ");
    printf("\n The value of a is : %d ",a);
    printf("\n The value of b is : %d ",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n After Swapping : ");
    printf("\n The value of a is : %d ",a);
    printf("\n The value of b is : %d ",b);
        return 0;
}
