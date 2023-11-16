#include<stdio.h>
#include<conio.h>
int main(){
    int arr[5];
    int i;
printf("Enter 5 elements : ");
for ( i = 0; i < 5;i++)
{
    scanf("%d", &arr[i]);
    
}
printf("Elements of array : ");{
    for (i = 0; i < 5;i++){
        printf("%d", arr[i]);
    }
}
return 0;
}
