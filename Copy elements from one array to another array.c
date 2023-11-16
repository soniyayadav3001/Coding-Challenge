#include<stdio.h>
#include<conio.h>
int main() {
  int arr1[100], arr2[100];
  int i, n;

  printf("Enter the number of elements to be stored in the array: ");
  scanf("%d", &n);

  printf("Enter %d elements in the array: ", n);
  for(i=0; i<n; i++) {
    scanf("%d", &arr1[i]);
  }

  /* Copy elements of first array into second array */
  for(i=0; i<n; i++) {
    arr2[i] = arr1[i];
  }

  /* Prints the elements of first array */
  printf("\nThe elements stored in the first array are: ");
  for(i=0; i<n; i++) {
    printf("% d", arr1[i]);
  }

  /* Prints the elements copied into the second array */
  printf("\nThe elements copied into the second array are: ");
  for(i=0; i<n; i++) {
    printf("% d", arr2[i]);
  }

  return 0;
}
