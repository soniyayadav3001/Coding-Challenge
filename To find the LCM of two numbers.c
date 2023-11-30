#include<stdio.h>
int main() 
{
    int a, b, max;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    max = (a > b) ? a : b; 
    while (max % a != 0 || max % b != 0) 
    {
            max++;
    }
    printf("The LCM of %d and %d is %d.", a, b, max); 
}
