#include <stdio.h>

int main() {
    int size;

    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&size);

    int arr1[size];
    int arr2[size];

    for (int i = 0; i < size; i++) {
        printf("element - %d : ",i);
        scanf("%d",&arr1[i]);
    }

    for (int i = 0; i < size; i++) {
        arr2[i] = arr1[i];
    }

    printf("The elements stored in the first array are :");

    for (int i = 0; i < size; i++) {
        printf("%d ",arr1[i]);
    }

    printf("\nThe elements copied into the second array are :");

    for (int i = 0; i < size; i++) {
        printf("%d ",arr2[i]);
    }
}

// Write a program in C to copy the elements of one array into another array.
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 15
// element - 1 : 10
// element - 2 : 12
// Expected Output :
// The elements stored in the first array are :
// 15 10 12
// The elements copied into the second array are :
// 15 10 12