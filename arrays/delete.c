#include <stdio.h>

int main() {
    int size;

    printf("Input the size of array : ");
    scanf("%d",&size);

    int arr[size];

    for (int i = 0; i < size; i++) {
        printf("element - %d : ",i);
        scanf("%d",&arr[i]);
    }

    int delete;
    printf("Input the value where to delete: ");
    scanf("%d",&delete);

    for (int i = 0; i < size; i++) {
        if (arr[i]  == delete) {
            for (int j = i; j < size; j++) {
                arr[j] = arr[j + 1];
            }
        }
    }

    printf("The new list is :");
    for (int i = 0; i < size - 1; i++) {
        printf("%d ",arr[i]);       
    }
}

// Write a program in C to delete an element at a desired position from an array.
// Test Data :
// Input the size of array : 5
// Input 5 elements in the array in ascending order:
// element - 0 : 1
// element - 1 : 2
// element - 2 : 3
// element - 3 : 4
// element - 4 : 5
// Input the position where to delete: 3
// Expected Output :
// The new list is : 1 2 4 5
