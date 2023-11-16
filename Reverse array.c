#include<stdio.h>
#include<conio.h>
int main() {
    int n, i;
    int arr[100];

    printf("Enter the number of elements to store in the array: ");
    scanf("%d", &n);

    printf("Enter %d number of elements in the array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The values stored into the array are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nThe values stored into the array in reverse order are: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
